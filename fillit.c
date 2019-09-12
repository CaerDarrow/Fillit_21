/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:42:36 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 14:56:05 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "figures.h"

int	main(int argc, char **argv)
{
	static int	figs[26];

	if (argc == 2)
	{
		if (reader(argv[1], figs))
			solver(figs);
		else
			print("Error\n");
	}
	return (0);
}
