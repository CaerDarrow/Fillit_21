/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applicator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:10:07 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:50:15 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static int	check(char *c, char to_check)
{
	return ((*c == to_check));
}

static int	fill(char *c, char to_fill)
{
	*c = to_fill;
	return (1);
}

int			applicator(char *map, int n[4], char c, int op_id)
{
	static int	(*op[2])(char *, char) = {check, fill};
	int			len;
	int			res;

	len = (int)length(map, sizeof(*map));
	res = 1;
	if (n[0] < len && n[1] < len && n[2] < len && n[3] < len)
	{
		res &= op[op_id](&map[n[0]], c);
		res &= op[op_id](&map[n[1]], c);
		res &= op[op_id](&map[n[2]], c);
		res &= op[op_id](&map[n[3]], c);
		return (res);
	}
	return (0);
}
