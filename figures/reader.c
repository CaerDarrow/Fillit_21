/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:23:55 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:23:07 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "figures.h"
#include <unistd.h>
#include <fcntl.h>

static int	check_fig(char buf[22], int *fig)
{
	int			i;
	int			sharp;
	static int	coords[4] = {4, 9, 14, 19};

	sharp = 0;
	i = 0;
	if (applicator(buf, coords, '\n', CHECK) && buf[20] == '\n')
	{
		while (i < 19)
		{
			if (i != 4 && i != 9 && i != 14)
			{
				if (buf[i] == '#')
				{
					if (*fig == -1)
						*fig = i;
					sharp += 1;
				}
				else if (buf[i] != '.')
					return (-1);
			}
			i++;
		}
	}
	return (sharp == 4) ? 1 : -1;
}

static int	get_fig(char buf[22], int fig)
{
	int	i;
	int	coords[4];

	i = 1;
	while (i < 20)
	{
		g_choose[i](coords, fig, 4);
		if (applicator(buf, coords, '#', CHECK))
			return (i);
		i++;
	}
	return (0);
}

static int	check_and_get_fig(char buf[22])
{
	int			fig;

	fig = -1;
	if ((check_fig(buf, &fig)) == -1)
		return (0);
	return (get_fig(buf, fig));
}

int			reader(char *fname, int figs[26])
{
	int		i;
	char	buf[22];
	int		fd;
	int		readed;

	i = 0;
	if ((fd = open(fname, O_RDONLY)) != -1)
	{
		while ((readed = read(fd, buf, 21)))
		{
			if (readed == 20)
				buf[readed++] = '\n';
			if (readed == 21)
			{
				if (i > 26 || !(figs[i] = check_and_get_fig(buf)))
					return (0);
				i++;
			}
			else
				return (0);
		}
		close(fd);
		return (1);
	}
	return (0);
}
