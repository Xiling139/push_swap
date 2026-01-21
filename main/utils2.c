/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:55:40 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/21 19:21:54 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	allow_push(int *arr1, int size1, int num)
{
	int	min_a;
	int	max_a;

	min_a = array_min(arr1, size1);
	max_a = array_max(arr1, size1);
	if (num <= arr1[0] && num >= arr1[size1 - 1])
		return (true);
	if (num < min_a && arr1[0] == min_a)
		return (true);
	if (num > max_a && arr1[size1 - 1] == max_a)
		return (true);
	return (false);
}

int	min_pos(int *arr, int size)
{
	int	min;
	int	i;

	min = array_min(arr, size);
	i = 0;
	while (true)
	{
		if (arr[i] == min)
			return (i);
		i++;
	}
}
