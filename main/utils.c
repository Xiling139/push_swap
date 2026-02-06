/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:32:57 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 13:57:58 by zhenming         ###   ########.fr       */
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
			if (!(str[i] == '-' && ft_isdigit(str[i + 1]) != 0))
				return (false);
		}
		i++;
	}
	return (true);
}

bool	is_broadly_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size - 1)
	{
		if (stack.array[i] > stack.array[i + 1]
			&& !(stack.array[i] == array_max(stack)
				&& stack.array[i + 1] == array_min(stack)))
			return (false);
		i++;
	}
	return (true);
}

bool	is_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size - 1)
	{
		if (stack.array[i] > stack.array[i + 1])
			return (false);
		i++;
	}
	return (true);
}

int	array_max(t_stack stack)
{
	int	i;
	int	sup;

	i = 1;
	sup = stack.array[0];
	while (i < stack.size)
	{
		if (stack.array[i] > sup)
		{
			sup = stack.array[i];
		}
		i++;
	}
	return (sup);
}

int	array_min(t_stack stack)
{
	int	i;
	int	inf;

	i = 1;
	inf = stack.array[0];
	while (i < stack.size)
	{
		if (stack.array[i] < inf)
		{
			inf = stack.array[i];
		}
		i++;
	}
	return (inf);
}
