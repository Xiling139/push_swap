/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:38:57 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 14:39:57 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	has_negative(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		if (stack.array[i] < 0)
			return (true);
		i++;
	}
	return (false);
}
