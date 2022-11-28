/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_decreasing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:46:03 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/28 00:53:20 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_tab(int *tab, size_t size)
{
	size_t	i;

	if (tab == NULL || ! size)
		return ;
	printf("[");
	i = 0;
	while (i < size - 1)
	{
		printf("%d ,", *(tab + i));
		i ++;
	}
	printf("%d]\n", *(tab + i));
}

void	ft_sort_tab(int *tab, size_t size)
{
	size_t	i;
	ssize_t	j;
	int		key;

	if (tab == NULL || ! size)
		return ;
	i = 1;
	ft_print_tab(tab, size);
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
		ft_print_tab(tab, size);
		i ++;
	}
}

int	main(void)
{
	int	tab[10] = {31, 41, 59, 26, 41, 58, 12, 98, 29, 3};

	ft_sort_tab(tab, 10);
	return (0);
}
