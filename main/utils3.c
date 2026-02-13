/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:32:20 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/13 16:39:16 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos(t_stack stack, int target)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		if (stack.array[i] == target)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	sum(int *array, int index)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (i <= index)
	{
		value += array[i];
		i++;
	}
	return (value);
}

int	get_chunk_size(int size)
{
	if (size < 25)
		return (2);
	if (size < 50)
		return (4);
	if (size < 150)
		return (6);
	if (size < 250)
		return (9);
	if (size < 350)
		return (11);
	if (size < 800)
		return (13);
	return (15);
}
