/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:35:58 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:52:58 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "figures/figures.h"

enum		e_ops {
	CHECK,
	FILL,
};

int			reader(char *fname, int figs[26]);
int			applicator(char *map, int n[4], char c, int op_id);
void		solver(int figs[26]);
int			length(void *ptr, int step);
void		print(char *str);

#endif
