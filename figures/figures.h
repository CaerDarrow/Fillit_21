/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figures.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:43:39 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 14:56:30 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURES_H
# define FIGURES_H

void		n(int coords[4], int bias, int size);
void		s(int coords[4], int bias, int size);
void		i1(int coords[4], int bias, int size);
void		i2(int coords[4], int bias, int size);
void		t1(int coords[4], int bias, int size);
void		t2(int coords[4], int bias, int size);
void		t3(int coords[4], int bias, int size);
void		t4(int coords[4], int bias, int size);
void		l1(int coords[4], int bias, int size);
void		l2(int coords[4], int bias, int size);
void		l3(int coords[4], int bias, int size);
void		l4(int coords[4], int bias, int size);
void		r1(int coords[4], int bias, int size);
void		r2(int coords[4], int bias, int size);
void		r3(int coords[4], int bias, int size);
void		r4(int coords[4], int bias, int size);
void		z1(int coords[4], int bias, int size);
void		z2(int coords[4], int bias, int size);
void		z3(int coords[4], int bias, int size);
void		z4(int coords[4], int bias, int size);

enum		e_ops {
	CHECK,
	FILL,
};

int			reader(char *fname, int figs[26]);
int			applicator(char *map, int n[4], char c, int op_id);
void		solver(int figs[26]);
int			length(void *ptr, int step);
void		print(char *str);

static void	(*g_choose[20])(int[4], int, int) = {0, s, i1, i2, t1, t2, t3, t4,
	l1, l2, l3, l4, r1, r2, r3, r4, z1, z2, z3, z4};

#endif
