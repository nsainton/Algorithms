/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:27:17 by nsainton          #+#    #+#             */
/*   Updated: 2022/12/01 00:41:03 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils/utils.h"

void	ft_sort_tab(int *tab, size_t size);
int		binary_rec(int *tab, size_t beg, size_t end, int value);
int		binary_it(int *tab, size_t size, int value);

int	main(void)
{
	int		tab[11];
	size_t	size;
	int		i;

	size = sizeof tab / sizeof * tab;
	ft_init_tab(tab, 123, size, 100);
	ft_print_tab(tab, size);
	ft_sort_tab(tab, size);
	ft_print_tab(tab, size);
	i = binary_rec(tab, 0, size - 1, 101);
	printf("Retour de binary_rec : %d\n", i);
	i = binary_it(tab, size, 101);
	printf("Retour de binary_it : %d\n", i);
	return (0);
}
