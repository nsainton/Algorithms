/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binsum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 05:41:34 by nsainton          #+#    #+#             */
/*   Updated: 2022/12/01 00:27:10 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_print_memory(int *tab, size_t size)
{
	size_t	i;

	if (tab == NULL || ! size)
		return ;
	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d", *(tab + i));
		i ++;
	}
	printf("%d]\n", *(tab + i));
}

int	*ft_sum(int *tab_a, int *tab_b, size_t size)
{
	int		i;
	int		*tab_c;
	int		tmp;

	if (tab_a == NULL || tab_b == NULL || ! size)
		return (NULL);
	tab_c = malloc(sizeof * tab_c * (size + 1));
	if (tab_c == NULL)
		return (NULL);
	tab_c[size] = 0;
	i = (int)size - 1;
	while (i > -1)
	{
		tmp = tab_a[i] + tab_b[i] + tab_c[i + 1];
		*(tab_c + i) = tmp / 2;
		*(tab_c + i + 1) = tmp % 2;
		i --;
	}
	return (tab_c);
}
