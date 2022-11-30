/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_decreasing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:46:03 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/30 06:41:10 by nsainton         ###   ########.fr       */
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

int	main(void)
{
	int		tab[10];
	size_t	size;

	size = sizeof tab / sizeof * tab;
	ft_init_tab(tab, 20, size, 100);
	ft_print_tab(tab, size);
	ft_sort_tab(tab, size);
	ft_print_tab(tab, size);
	return (0);
}
