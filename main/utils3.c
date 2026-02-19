/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:32:20 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 16:33:15 by zhenming         ###   ########.fr       */
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

int	find_nearest_num(t_stack stack, int min)
{
	int	i;

	if (stack.array[0] >= min)
		return (stack.array[0]);
	i = 1;
	while (i < stack.size / 2)
	{
		if (stack.array[i] >= min)
			return (stack.array[i]);
		if (stack.array[stack.size - i] >= min)
			return (stack.array[stack.size - i]);
		i++;
	}
	return (stack.array[0]);
}

int	get_chunk_size(int size)
{
	if (size < 25)
		return (2);
	if (size < 50)
		return (3);
	if (size < 150)
		return (5);
	if (size < 350)
		return (8);
	if (size < 800)
		return (11);
	return (15);
}
