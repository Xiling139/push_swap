/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:32:20 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 13:10:17 by zhenming         ###   ########.fr       */
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

int	find_nearest_pos(t_stack stack, int max)
{
	int	i;

	if (stack.array[0] <= max)
		return (0);
	i = 1;
	while (i < stack.size / 2)
	{
		if (stack.array[0] <= max)
			return (i);
		if (stack.array[stack.size - i] <= max)
			return (i * -1);
		i++;
	}
	return (0);
}

int	get_number(t_stack stack, int pos)
{
	if (pos >= 0)
		return (stack.array[pos]);
	else
		return (stack.array[stack.size + pos]);
}

int	get_chunk_size(int size)
{
	if (size < 25)
		return (2);
	if (size < 50)
		return (4);
	if (size < 150)
		return (6);
	if (size < 350)
		return (9);
	if (size < 800)
		return (13);
	return (15);
}
