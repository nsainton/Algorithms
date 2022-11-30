/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 05:23:26 by nsainton          #+#    #+#             */
/*   Updated: 2022/12/01 00:26:47 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils/utils.h"

void	ft_sort_tab(int *tab, size_t size)
{
	size_t	i;
	ssize_t	j;
	int		tmp;

	if (! (tab && size))
		return ;
	i = 1;
	while (i < size)
	{
		tmp = *(tab + i);
		j = i - 1;
		while (j > -1 && *(tab + j) > tmp)
		{
			*(tab + j + 1) = *(tab + j);
			j --;
		}
		*(tab + j + 1) = tmp;
		i ++;
	}
}
