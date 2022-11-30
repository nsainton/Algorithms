/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 04:07:36 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/30 05:35:06 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_print_tab(int *tab, size_t size)
{
	if (tab == NULL || ! size)
		return ;
	printf("[");
	while (size > 1)
	{
		printf("%d, ", *tab);
		tab ++;
		size --;
	}
	printf("%d]\n", *tab);
}

void	ft_init_tab(int *tab, unsigned int seed, size_t size, size_t range)
{
	size_t	i;

	if (tab == NULL || ! size || ! range)
		return ;
	i = 0;
	srand(seed);
	while (i < size)
	{
		*(tab + i) = rand() % range;
		i ++;
	}
}
