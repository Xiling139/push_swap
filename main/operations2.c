/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:41:23 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/13 14:43:00 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	px(t_stack *s1, t_stack *s2, char x)
{
	push(s1, s2);
	ft_printf("p%c\n", x);
}

void	rx(t_stack stack, char x)
{
	rotate(stack);
	ft_printf("r%c\n", x);
}

void	rr(t_stack a, t_stack b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

void	rrx(t_stack stack, char x)
{
	rotate_reversed(stack);
	ft_printf("rr%c\n", x);
}
