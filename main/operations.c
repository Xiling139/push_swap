/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:53:08 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/12 16:34:07 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack stack)
{
	int	temp;

	if (stack.size <= 1)
		return ;
	temp = stack.array[0];
	stack.array[0] = stack.array[1];
	stack.array[1] = temp;
}

// Push the top elements of arr1 to arr2
void	push(t_stack *s1, t_stack *s2)
{
	int	i;
	int	temp;

	if (s1->size == 0)
		return ;
	i = 0;
	temp = s1->array[0];
	while (i < s1->size - 1)
	{
		s1->array[i] = s1->array[i + 1];
		i++;
	}
	i = s2->size;
	while (i > 0)
	{
		s2->array[i] = s2->array[i - 1];
		i--;
	}
	s2->array[0] = temp;
	s1->size = s1->size - 1;
	s2->size = s2->size + 1;
}

void	rotate(t_stack stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack.array[0];
	while (i < stack.size - 1)
	{
		stack.array[i] = stack.array[i + 1];
		i++;
	}
	stack.array[i] = temp;
}

void	rotate_reversed(t_stack stack)
{
	int	i;
	int	temp;

	i = stack.size - 1;
	temp = stack.array[stack.size - 1];
	while (i > 0)
	{
		stack.array[i] = stack.array[i - 1];
		i--;
	}
	stack.array[i] = temp;
}
