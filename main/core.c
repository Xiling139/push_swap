/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:54:45 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 16:37:08 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_array(t_stack stack)
{
	int	i;

	i = 0;
	ft_printf("[");
	while (i < stack.size - 1)
	{
		ft_printf("%d, ", stack.array[i]);
		i++;
	}
	if (stack.size == 0)
		ft_printf("empty]\n");
	else
		ft_printf("%d]\n", stack.array[i]);
}

void	print_arrays(t_stack s1, t_stack s2)
{
	ft_printf("======================\n");
	ft_printf("1st array: ");
	print_array(s1);
	ft_printf("2nd array: ");
	print_array(s2);
	ft_printf("======================\n\n");
}

int	core(t_stack a)
{
	t_stack	b;

	b.size = 0;
	b.array = (int *)ft_calloc(a.size, sizeof(int));
	if (convert_stack(a) == -1)
		return (-1);
	if (is_broadly_sorted(a) == true)
	{
	}
	else
	{
		radix_sort(a, b);
	}
	return (0);
}
