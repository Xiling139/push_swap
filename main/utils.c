/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:32:57 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/21 19:33:20 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

bool	is_imperfectly_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1] && !(arr[i] == array_max(arr, size) && arr[i
					+ 1] == array_min(arr, size)))
			return (false);
		i++;
	}
	if (arr[size - 1] > arr[0])
		return (false);
	return (true);
}

bool	is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (false);
		i++;
	}
	return (true);
}

int	array_max(int *arr, int size)
{
	int	i;
	int	sup;

	i = 1;
	sup = arr[0];
	while (i < size)
	{
		if (arr[i] > sup)
		{
			sup = arr[i];
		}
		i++;
	}
	return (sup);
}

int	array_min(int *arr, int size)
{
	int	i;
	int	inf;

	i = 1;
	inf = arr[0];
	while (i < size)
	{
		if (arr[i] < inf)
		{
			inf = arr[i];
		}
		i++;
	}
	return (inf);
}
