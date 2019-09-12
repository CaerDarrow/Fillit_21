/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:10:13 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/09/12 17:50:19 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

int		length(void *ptr, int step)
{
	int len;

	len = 0;
	while (*(unsigned char *)ptr)
	{
		ptr += step;
		len++;
	}
	return (len);
}

void	print(char *str)
{
	write(1, str, length(str, sizeof(*str)));
}
