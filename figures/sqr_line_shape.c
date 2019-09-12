/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqr_line_shape.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:41:36 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 11:40:46 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "figures.h"

void	s(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + size + 1;
	coords[3] = bias + size + 2;
}

void	i1(int coords[4], int bias, int size)
{
	(void)size;
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + 2;
	coords[3] = bias + 3;
}

void	i2(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size + 1;
	coords[2] = bias + 2 * (size + 1);
	coords[3] = bias + 3 * (size + 1);
}
