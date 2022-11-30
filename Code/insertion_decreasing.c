/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_decreasing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:46:03 by nsainton          #+#    #+#             */
/*   Updated: 2022/12/01 00:26:35 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils/utils.h"

void	ft_sort_tab(int *tab, size_t size)
{
	size_t	i;
	ssize_t	j;
	int		key;

	if (tab == NULL || ! size)
		return ;
	i = 1;
	while (i < size)
	{
		j = i - 1;
		key = *(tab + i);
		while (j > -1 && *(tab + j) < key)
		{
			*(tab + j + 1) = *(tab + j);
			j --;
		}
		*(tab + j + 1) = key;
		i ++;
	}
}
