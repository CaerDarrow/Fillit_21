/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_shape_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:41:45 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 16:19:54 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	r1(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + size - 1;
	coords[2] = bias + size;
	coords[3] = bias + size + 1;
}

void	r2(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + (size + 1);
	coords[2] = bias + 2 * (size + 1);
	coords[3] = bias + 2 * (size + 1) + 1;
}

void	r3(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + 2;
	coords[3] = bias + (size + 1);
}

void	r4(int coords[4], int bias, int size)
{
	coords[0] = bias;
	coords[1] = bias + 1;
	coords[2] = bias + (size + 1) + 1;
	coords[3] = bias + 2 * (size + 1) + 1;
}
