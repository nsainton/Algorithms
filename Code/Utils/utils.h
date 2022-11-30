/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 04:08:23 by nsainton          #+#    #+#             */
/*   Updated: 2022/11/30 05:03:33 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_tab
{
	size_t	elem_size;
	size_t	elem_number;
	void	*tab;
}				t_tab;

void	ft_print_tab(int *tab, size_t size);

void	ft_init_tab(int *tab, unsigned int seed, size_t size, size_t range);
#endif
