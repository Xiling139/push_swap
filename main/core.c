/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:54:45 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/18 17:14:48 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	ft_printf("[");
	while (i < size - 1)
	{
		ft_printf("%d, ", arr[i]);
		i++;
	}
	if (size == 0)
		ft_printf("empty]\n");
	else
		ft_printf("%d]\n", arr[i]);
}

void	print_arrays(int *arr1, int *arr2, int size1, int size2)
{
	ft_printf("======================\n");
	ft_printf("1st array: ");
	print_array(arr1, size1);
	ft_printf("2nd array: ");
	print_array(arr2, size2);
	ft_printf("======================\n\n");
}

void	core(int *numbers, int size_a)
{
	const int	size = size_a;
	int			i;
	int			*numbers_b;
	int			size_b;

	size_b = 0;
	numbers_b = (int *)ft_calloc(size_a, sizeof(int));
	i = 0;

	while (i < size / 2)
	{
		push(numbers, &size_a, numbers_b, &size_b);
		i++;
	}
	print_arrays(numbers, numbers_b, size_a, size_b);
}
