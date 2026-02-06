/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:32:20 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 16:32:05 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digits(int i)
{
	int	value;

	value = 1;
	if (i < 0)
	{
		i = i * -1;
	}
	while (i >= 2)
	{
		i = i / 2;
		value++;
	}
	return (value);
}

int	get_max_digit(t_stack stack)
{
	int	value;
	int	i;

	value = 1;
	i = 0;
	while (i < stack.size)
	{
		if (digits(stack.array[i]) > value)
			value = digits(stack.array[i]);
		i++;
	}
	return (value);
}

int	get_digit_value(int n, int digit)
{
	int		denominator;
	int		i;

	denominator = 1;
	i = 0;
	while (i < digit - 1)
	{
		denominator *= 2;
		i++;
	}
	return ((n / denominator) % 2);
}

bool	has_zero(t_stack stack, int digit)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		if (get_digit_value(stack.array[i], digit) == 0)
			return (true);
		i++;
	}
	return (false);
}

bool	has_one(t_stack stack, int digit)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		if (get_digit_value(stack.array[i], digit) == 1)
			return (true);
		i++;
	}
	return (false);
}
