/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:54:45 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/16 17:45:02 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	valid_array(t_stack a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < a.size)
	{
		j = i + 1;
		while (j < a.size)
		{
			if (a.array[i] == a.array[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

int	core(t_stack a)
{
	t_stack	b;

	if (valid_array(a) == false)
		return (-1);
	if (a.size == 1)
		return (0);
	if (convert_stack(a) == -1)
		return (-1);
	b.size = 0;
	b.array = (int *)ft_calloc(a.size, sizeof(int));
	if (!b.array)
		return (-1);
	if (is_broadly_sorted(a) == true)
		move_to_top(a, get_pos(a, 0), 'a');
	else if (a.size <= 3)
		sort_three(a, 0);
	else
		sort(a, b);
	free(b.array);
	return (0);
}
