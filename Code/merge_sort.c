/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 04:07:10 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/30 06:34:14 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils/utils.h"

static int	init(int **half, int *tab, size_t size, size_t starting_point)
{
	size_t	i;

	*half = malloc(sizeof(int) * (size + 1));
	if (*half == NULL)
		return (1);
	i = 0;
	while (i < size)
	{
		(*half)[i] = tab[starting_point + i];
		i ++;
	}
	(*half)[i] = INT_MAX;
	return (0);
}

//For this function, don't forget that start, middle and last are indexes
//of the array
static void	merge(int *tab, size_t start, size_t middle, size_t last)
{
	size_t	sizes[2];
	int		*left;
	int		*right;
	size_t	indexes[2];

	sizes[0] = middle - start + 1;
	sizes[1] = last - middle;
	if (init(&left, tab, sizes[0], start))
		return ;
	if (init(&right, tab, sizes[1], middle + 1))
		return (free(left));
	indexes[0] = 0;
	indexes[1] = 0;
	while (start < last + 1)
	{
		if (left[indexes[0]] < right[indexes[1]])
			tab[start] = left[indexes[0]++];
		else
			tab[start] = right[indexes[1]++];
		start ++;
	}
	free(right);
	free(left);
}

//calling the subroutine merge_sort until the tab is split as single
//pieces of 1 number, then merge recursively to get the whole
//sorted tab back
void	merge_sort(int *tab, size_t start, size_t end)
{
	size_t	middle;

	if (tab == NULL || !end || start > end - 1)
		return ;
	middle = (start + end) / 2;
	merge_sort(tab, start, middle);
	merge_sort(tab, middle + 1, end);
	merge(tab, start, middle, end);
}

int	main(void)
{
	int		tab[10];
	size_t	size;

	size = sizeof tab / sizeof * tab;
	ft_init_tab(tab, 200, size, 100);
	ft_print_tab(tab, size);
	merge_sort(tab, 0, size - 1);
	ft_print_tab(tab, size);
	return (0);
}
