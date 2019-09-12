/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:26:07 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:50:18 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	solve(int index, int figs[26], char *map, int size)
{
	int	bias;
	int	coords[4];

	bias = 0;
	if (figs[index] == 0)
		return (1);
	while (bias < size * (size + 1))
	{
		g_choose[figs[index]](coords, bias, size);
		if (applicator(map, coords, '.', CHECK))
		{
			applicator(map, coords, (char)('A' + index), FILL);
			if (solve(index + 1, figs, map, size))
				return (1);
			applicator(map, coords, '.', FILL);
		}
		bias++;
	}
	return (0);
}

static void	setmap(char *map, int size)
{
	int i;
	int nplace;

	i = 0;
	nplace = 0;
	while (i < (size + 1) * (size))
	{
		if (i == size + (size + 1) * nplace)
		{
			map[i] = '\n';
			nplace++;
		}
		else
			map[i] = '.';
		i++;
	}
	map[i] = '\0';
}

void		solver(int figs[26])
{
	static char	map[144];
	int			size;
	int			fig_count;

	size = 1;
	fig_count = length(figs, sizeof(*figs));
	while (size * size < fig_count * 4)
		size++;
	setmap(map, size);
	while (!solve(0, figs, map, size))
	{
		size++;
		setmap(map, size);
	}
	print(map);
}
