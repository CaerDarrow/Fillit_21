/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:41:33 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:42:43 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	z1(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + size + 2;
	coords[3] = bias + size + 3;
}

void	z2(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size;
	coords[2] = bias + (size + 1);
	coords[3] = bias + 2 * (size + 1) - 1;
}

void	z3(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + size;
	coords[3] = bias + (size + 1);
}

void	z4(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size + 1;
	coords[2] = bias + size + 2;
	coords[3] = bias + 2 * (size + 1) + 1;
}
