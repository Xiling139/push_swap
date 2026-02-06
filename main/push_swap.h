/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:10 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/06 16:32:56 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*array;
	int	size;
}		t_stack;

int		core(t_stack stack);

// convert array
int		convert_stack(t_stack stack);

// Sorting Functions
// void	sort(int *arr, int size, char c);
// void	insert(int *arr1, int size1, int *arr2, int size2);

void	radix_sort(t_stack a, t_stack b);
void	sort_by_digit(t_stack *a, t_stack *b, int digit, int value);

// Operations
void	swap(t_stack stack);
void	push(t_stack *s1, t_stack *s2);
void	rotate(t_stack stack);
void	rotate_reversed(t_stack stack);

/* Utils */

// bools
bool	is_number(char *str);
bool	is_sorted(t_stack stack);
bool	is_broadly_sorted(t_stack stack);
bool	has_zero(t_stack stack, int digit);
bool	has_one(t_stack stack, int digit);
bool	has_negative(t_stack stack);

// ints
int		array_min(t_stack stack);
int		array_max(t_stack stack);
int		get_digit_value(int n, int digit);
int		get_max_digit(t_stack stack);
int		digits(int i);

void	print_arrays(t_stack s1, t_stack s2);

#endif
