/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:15:51 by nsainton          #+#    #+#             */
/*   Updated: 2022/12/01 00:40:04 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils/utils.h"

int	binary_rec(int *tab, size_t beg, size_t end, int value)
{
	int	half;

	if (tab == NULL)
		return (-2);
	if (end - beg < 2)
	{
		if (tab[end] == value)
			return ((int)end);
		return (-1);
	}
	half = (beg + end) / 2;
	if (tab[half] < value)
		return (binary_rec(tab, half, end, value));
	return (binary_rec(tab, beg, half, value));
}

int	binary_it(int *tab, size_t size, int value)
{
	size_t	lb;
	size_t	rb;
	size_t	tmp;

	if (tab == NULL || ! size)
		return (-2);
	lb = 0;
	rb = size - 1;
	while (rb - lb > 1)
	{
		tmp = (lb + rb) / 2;
		if (*(tab + tmp) > value)
			rb = tmp;
		else
			lb = tmp;
	}
	if (*(tab + lb) == value)
		return ((int)lb);
	if (*(tab + rb) == value)
		return ((int)rb);
	return (-1);
}
