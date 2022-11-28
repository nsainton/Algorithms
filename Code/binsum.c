/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binsum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 05:41:34 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/28 06:00:25 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_print_memory(int *tab, size_t size)
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

int	*ft_sum(int *A, int *B, size_t size)
{
	int	i;
	int	*C;

	if (A == NULL || B == NULL || ! size)
		return (NULL);
	C = malloc(sizeof *C * (size + 1));
	if (C == NULL)
		return (NULL);
	C[size] = (A[size - 1] + B[size - 1]) % 2;
	C[size - 1] = (A[size - 1] + B[size - 1]) / 2;
	i = size - 2;
	while (i > -1)
	{
		*(C + i + 1) = (*(A + i) + *(B + i)) / 2;
		*(C + i + 1) = (*(A + i) + *(B + i)) % 2;
		i ++;
	}
	return (C);
}

int	main(void)
{
	int	A[10] = {0, 1, 1, 0, 1, 1, 0, 1, 1, 0};
	int	B[10] = {1, 1, 1, 0, 1, 0, 0, 0, 1, 1};
	int	*C;

	C = ft_sum(A, B, 10);
	ft_print_memory(C, 11);
	if (C)
		free(C);
	return (0);
}
