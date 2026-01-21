/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:28:58 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/21 17:32:59 by zhenming         ###   ########.fr       */
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
	int	i;
	int	*numbers;

	if (is_error(argc, argv) == true)
		return (0);
	numbers = (int *)ft_calloc(argc - 1, sizeof(int));
	if (!numbers)
		return (0);
	i = 1;
	while (i < argc)
	{
		numbers[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	core(numbers, argc - 1);
	free(numbers);
}
