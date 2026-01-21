/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:54:45 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/21 19:31:44 by zhenming         ###   ########.fr       */
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

void	sort(int *arr, int size, char c)
{
	while (is_imperfectly_sorted(arr, size) == false)
	{
		if (arr[0] > arr[1] && !(arr[0] == array_max(arr, size)
				&& arr[1] == array_min(arr, size)))
		{
			swap(arr, size);
			ft_printf("s%c\n", c);
		}
		else
		{
			rotate(arr, size);
			ft_printf("r%c\n", c);
		}
	}
}

void	insert(int *arr1, int size1, int *arr2, int size2)
{
	while (size2 > 0 || is_sorted(arr1, size1) == false)
	{
		if (allow_push(arr1, size1, arr2[0]) == true && size2 > 0)
		{
			push(arr2, &size2, arr1, &size1);
			ft_printf("pa\n");
		}
		else
		{
			if ((size2 != 0 && arr1[0] < arr2[0]) || (size2 == 0
					&& min_pos(arr1, size1) < size1 / 2))
			{
				rotate(arr1, size1);
				ft_printf("ra\n");
			}
			else
			{
				rotate_reversed(arr1, size1);
				ft_printf("rra\n");
			}
		}
		print_array(arr1, size1);
		usleep(100000);
	}
}

void	core(int *numbers_a, int size_a)
{
	int	i;
	int	*numbers_b;
	int	size_b;

	size_b = 0;
	numbers_b = (int *)ft_calloc(size_a, sizeof(int));
	i = 0;
	while (i < (size_a + size_b) / 2)
	{
		push(numbers_a, &size_a, numbers_b, &size_b);
		ft_printf("pb\n");
		i++;
	}
	sort(numbers_a, size_a, 'a');
	sort(numbers_b, size_b, 'b');
	insert(numbers_a, size_a, numbers_b, size_b);
	print_array(numbers_a, size_a + size_b);
}
