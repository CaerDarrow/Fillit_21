/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_shape.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:32:56 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 16:28:28 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "figures.h"

void	t1(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size;
	coords[2] = bias + size + 1;
	coords[3] = bias + size + 2;
}

void	t2(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size + 1;
	coords[2] = bias + size + 2;
	coords[3] = bias + 2 * (size + 1);
}

void	t3(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size;
	coords[2] = bias + size + 1;
	coords[3] = bias + 2 * (size + 1);
}

void	t4(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + 2;
	coords[3] = bias + size + 2;
}
