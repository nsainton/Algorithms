/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 05:23:26 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/27 06:49:47 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_tab(int *tab, size_t size)
{
	size_t	i;

	if (tab == NULL || ! size)
		return ;
	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", *(tab + i));
		i ++;
	}
	printf("%d]\n", *(tab + i));
}

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
		//	ft_print_tab(tab, size);
		//	sleep(1);
		}
		*(tab + j + 1) = tmp;
		ft_print_tab(tab, size);
		i ++;
	}
}

int	main(void)
{
	int	tab[10] = {9, 8, 7, 5, 6, 4, 3, 1, 2, 0};

	ft_sort_tab(tab, 10);
	return (0);
}
