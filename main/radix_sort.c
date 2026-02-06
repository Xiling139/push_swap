/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:19:39 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 16:32:56 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_by_digit(t_stack *s1, t_stack *s2, int digit, int value)
{
	int		i;
	int		size;
	char	c;

	size = s1->size;
	c = value + 'a';
	i = 0;
	while (i < size)
	{
		if (get_digit_value(s1->array[0], digit) == value)
		{
			push(s1, s2);
			ft_printf("p%c\n", 'a' + 'b' - c);
		}
		else
		{
			rotate(*s1);
			ft_printf("r%c\n", c);
		}
		i++;
	}
}

void	push_back(t_stack a, t_stack b)
{
	while (b.size > 0)
	{
		push(&b, &a);
		ft_printf("pa\n");
	}
}

void	radix_sort(t_stack a, t_stack b)
{
	int	i;
	int	max_digit;

	max_digit = get_max_digit(a);
	i = 0;
	while (i < max_digit)
	{
		if (a.size > b.size)
		{
			if (has_one(b, i + 1) == true)
				sort_by_digit(&b, &a, i + 1, 1);
			if (has_zero(a, i + 1) == true)
				sort_by_digit(&a, &b, i + 1, 0);
		}
		else
		{
			if (has_zero(a, i + 1) == true)
				sort_by_digit(&a, &b, i + 1, 0);
			if (has_one(b, i + 1) == true)
				sort_by_digit(&b, &a, i + 1, 1);
		}
		i = i + 1;
	}
	push_back(a, b);
}
