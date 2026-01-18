/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:53:08 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/18 15:54:46 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *arr, int size)
{
	int	temp;

	if (size <= 1)
		return ;
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

// Push the top elements of arr1 to arr2
void	push(int *arr1, int *size1, int *arr2, int *size2)
{
	int	i;
	int	temp;

	if (*size1 == 0)
		return ;
	i = 0;
	temp = arr1[0];
	while (i < *size1 - 1)
	{
		arr1[i] = arr1[i + 1];
		i++;
	}
	i = *size2;
	while (i > 0)
	{
		arr2[i] = arr2[i - 1];
		i--;
	}
	arr2[0] = temp;
	*size1 = *size1 - 1;
	*size2 = *size2 + 1;
}

void	rotate(int *arr, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = arr[0];
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
}

void	rotate_reversed(int *arr, int size)
{
	int	i;
	int	temp;

	i = size - 1;
	temp = arr[size - 1];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = temp;
}
