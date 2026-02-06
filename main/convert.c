/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:38:22 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 16:32:41 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	int_array_dup(int *dest, int *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	free(src);
}

int	convert_stack(t_stack stack)
{
	int	i;
	int	j;
	int	*newarr;
	int	count;

	count = 0;
	i = -1;
	j = 0;
	newarr = (int *)ft_calloc(stack.size, sizeof(int));
	if (!newarr)
		return (-1);
	while (++i < stack.size)
	{
		j = 0;
		count = 0;
		while (j < stack.size)
		{
			if (stack.array[i] > stack.array[j])
				count++;
			j++;
		}
		newarr[i] = count;
	}
	int_array_dup(stack.array, newarr, stack.size);
	return (0);
}
