/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:54:55 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/13 16:33:50 by zhenming         ###   ########.fr       */
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

void	adjust_array(t_stack b, int nbr)
{
	int	pos;
	int	i;

	i = 0;
	if (b.size == 0)
		return ;
	pos = find_next_num_pos(b, nbr);
	move_to_top(b, pos);
}

void	push_chunk(t_stack *a, t_stack *b, int chunk_max)
{
	while (has_value_ranged(*a, chunk_max) && a->size > 3)
	{
		if ((a->array[0] <= chunk_max) && a->array[0] < array_max(*a) - 2)
		{
			adjust_array(*b, a->array[0]);
			push(a, b);
			ft_printf("pb\n");
		}
		else
		{
			rotate(*a);
			ft_printf("ra\n");
		}
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
		push_chunk(&a, &b, chunk_size * i);
		i++;
	}
	pos = get_pos(b, array_max(a) - 3);
	move_to_top(b, pos);
	sort_three(a, 0);
	while (b.size > 0)
	{
		push(&b, &a);
		ft_printf("pa\n");
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
