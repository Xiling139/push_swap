/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:28:58 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/19 12:07:51 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	omit_error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

bool	is_error(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (is_number(argv[i]) == false)
			return (true);
		i++;
	}
	return (false);
}

bool	check_overflow(char *nbr)
{
	int		i;
	long	num;

	i = 0;
	if (nbr[0] == '-')
		i++;
	while (nbr[i] == '0')
		i++;
	if (ft_strlen(&nbr[i]) > 11)
		return (true);
	num = ft_atoi_long(nbr);
	if (num > INT_MAX)
		return (true);
	if (num < INT_MIN)
		return (true);
	return (false);
}

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	stack;

	if (argc == 1)
		return (-1);
	if (is_error(argc, argv) == true)
		return (omit_error());
	stack.array = (int *)ft_calloc(argc - 1, sizeof(int));
	if (!stack.array)
		return (omit_error());
	i = 1;
	while (i < argc)
	{
		if (check_overflow(argv[i]) == true)
			return (free(stack.array), omit_error());
		stack.array[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	stack.size = argc - 1;
	if (core(stack) == -1)
		return (free(stack.array), omit_error());
	free(stack.array);
}
