/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:14:29 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 16:57:58 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_stack stack, int pos, char x)
{
	int	i;

	i = 0;
	if (pos <= stack.size / 2)
	{
		while (i < pos)
		{
			rotate(stack);
			ft_printf("r%c\n", x);
			i++;
		}
	}
	else
	{
		while (i < stack.size - pos)
		{
			rotate_reversed(stack);
			ft_printf("rr%c\n", x);
			i++;
		}
	}
}

void	rr_optimization(t_stack a, t_stack b, int pos1, int pos2)
{
	int	i;

	i = 0;
	while (i < min(pos1, pos2))
	{
		rr(a, b);
		i++;
	}
	i = 0;
	while (i < max(pos1, pos2) - min(pos1, pos2))
	{
		if (pos1 < pos2)
			rx(b, 'b');
		else
			rx(a, 'a');
		i++;
	}
}

void	rrr_optimization(t_stack a, t_stack b, int pos1, int pos2)
{
	int	i;

	i = 0;
	while (i < min(pos1, pos2))
	{
		rrr(a, b);
		i++;
	}
	i = 0;
	while (i < max(pos1, pos2) - min(pos1, pos2))
	{
		if (pos1 < pos2)
			rrx(b, 'b');
		else
			rrx(a, 'a');
		i++;
	}
}

void	optimized_rotate(t_stack a, t_stack b, int pos_a, int pos_b)
{
	int	s;
	int	t;
	int	u;
	int	min_operations;

	s = min(pos_a, a.size - pos_a) + min(pos_b, b.size - pos_b);
	t = max(pos_a, pos_b);
	u = max(a.size - pos_a, b.size - pos_b);
	min_operations = min(min(s, t), min(t, u));
	if (min_operations == s)
	{
		move_to_top(a, pos_a, 'a');
		move_to_top(b, pos_b, 'b');
	}
	else if (min_operations == t)
		rr_optimization(a, b, pos_a, pos_b);
	else
		rrr_optimization(a, b, a.size - pos_a, b.size - pos_b);
}
