/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:38:57 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 13:45:50 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_value_ranged(t_stack stack, int max)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < stack.size)
	{
		if (stack.array[i] <= max)
			count++;
		i++;
	}
	return (count);
}

int	find_prev_num_pos(t_stack stack, int num)
{
	int	prev_num;
	int	pos;
	int	i;

	i = 0;
	prev_num = -1;
	pos = -1;
	if (stack.size == 0)
		return (-1);
	if (num < array_min(stack))
		return (get_pos(stack, array_max(stack)));
	while (i < stack.size)
	{
		if (stack.array[i] < num && stack.array[i] > prev_num)
		{
			pos = i;
			prev_num = stack.array[i];
		}
		i++;
	}
	return (pos);
}

int	find_next_num_pos(t_stack stack, int num)
{
	int	next_num;
	int	pos;
	int	i;

	i = 0;
	next_num = -1;
	pos = -1;
	if (stack.size == 0)
		return (-1);
	if (num > array_max(stack))
		return (get_pos(stack, array_min(stack)));
	while (i < stack.size)
	{
		if (stack.array[i] > num && stack.array[i] < next_num)
		{
			pos = i;
			next_num = stack.array[i];
		}
		i++;
	}
	return (pos);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
