/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:28:58 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 15:59:39 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_error(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_printf("Error\n");
		return (true);
	}
	while (i < argc)
	{
		if (is_number(argv[i]) == false)
		{
			ft_printf("Error\n");
			return (true);
		}
		i++;
	}
	return (false);
}

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	if (is_error(argc, argv) == true)
		return (0);
	stack.array = (int *)ft_calloc(argc - 1, sizeof(int));
	if (!stack.array)
		return (0);
	i = 1;
	while (i < argc)
	{
		stack.array[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	stack.size = argc - 1;
	if (core(stack) == -1)
		return (0);
	free(stack.array);
}
