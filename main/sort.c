/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:54:55 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 13:23:59 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_stack stack, int pos)
{
	int	i;

	i = 0;
	if (pos < stack.size / 2)
	{
		while (i < pos)
		{
			rotate(stack);
			ft_printf("rb\n");
			i++;
		}
	}
	else
	{
		while (i < stack.size - pos)
		{
			rotate_reversed(stack);
			ft_printf("rrb\n");
			i++;
		}
	}
}

void	push_chunk(t_stack *a, t_stack *b, int chunk_max, int size)
{
	while (has_value_ranged(*a, chunk_max) > size / 4.4)
	{
		if ((a->array[0] <= chunk_max) && a->array[0] < array_max(*a) - 2)
		{
			px(a, b, 'b');
			if (b->array[0] < b->array[1] - size / 3.5)
			{
				if (a->array[0] > chunk_max)
					rr(*a, *b);
				else
					rx(*b, 'b');
			}

		}
		else
		{
			rotate(*a);
			ft_printf("ra\n");
		}
	}
}

void	push_remaining(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		if (a->array[0] < array_max(*a) - 2)
			px(a, b, 'b');
		else
			rx(*a, 'a');
	}
}

void	sort(t_stack a, t_stack b)
{
	const int	chunks = get_chunk_size(a.size);
	int			chunk_size;
	int			i;
	int			pos;

	chunk_size = a.size / chunks + 1;
	i = 1;
	while (i <= chunks)
	{
		push_chunk(&a, &b, chunk_size * i, chunk_size);
		i++;
	}
	push_remaining(&a, &b);
	sort_three(a, 0);
	while (b.size > 0)
	{
		pos = get_pos(b, a.array[0] - 1);
		move_to_top(b, pos);
		px(&b, &a, 'a');
	}
}

void	sort_three(t_stack stack, int value)
{
	if (!is_broadly_sorted(stack))
	{
		swap(stack);
		ft_printf("s%c\n", value + 'a');
	}
	if (is_sorted(stack))
		return ;
	if (get_pos(stack, array_min(stack)) == 1)
	{
		rotate(stack);
		ft_printf("r%c\n", value + 'a');
	}
	else if (get_pos(stack, array_min(stack)) == 2)
	{
		rotate_reversed(stack);
		ft_printf("rr%c\n", value + 'a');
	}
}
