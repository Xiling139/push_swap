/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:54:55 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/15 16:34:51 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (a->size < 4)
			break ;
	}
}

void	push_remaining(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		if (a->array[0] < array_max(*a) - 2)
		{
			px(a, b, 'b');
			if (b->array[0] < b->array[1] - 3)
			{
				if (a->array[0] > array_max(*a) - 2)
					rr(*a, *b);
				else
					rx(*b, 'b');
			}
		}
		else
			rx(*a, 'a');
	}
}

void	push_back(t_stack *a, t_stack *b, int chunk_min, int chunk_size)
{
	int	p;
	int	num;

	p = 0;
	while (p < chunk_size && b->size > 0)
	{
		num = find_nearest_num(*b, chunk_min);
		optimized_rotate(*a, *b, find_next_num_pos(*a, num), get_pos(*b, num));
		px(b, a, 'a');
		p++;
	}
}

void	sort(t_stack a, t_stack b)
{
	const int	chunks = get_chunk_size(a.size);
	int			chunk_size;
	int			i;

	chunk_size = a.size / chunks + 1;
	i = 1;
	while (i <= chunks)
	{
		push_chunk(&a, &b, chunk_size * i, chunk_size);
		i++;
	}
	push_remaining(&a, &b);
	sort_three(a, 0);
	chunk_size = 4;
	i = b.size / 4 + 1;
	while (i > 0)
	{
		i--;
		push_back(&a, &b, chunk_size * (i - 1), chunk_size);
	}
	move_to_top(a, get_pos(a, 0), 'a');
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
