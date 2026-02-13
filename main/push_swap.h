/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:10 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/13 16:26:44 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <limits.h>
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
void	sort_three(t_stack stack, int value);
void	sort(t_stack a, t_stack b);
// void	insert(int *arr1, int size1, int *arr2, int size2);

void	radix_sort(t_stack a, t_stack b);

// Operations
void	swap(t_stack stack);
void	push(t_stack *s1, t_stack *s2);
void	rotate(t_stack stack);
void	rotate_reversed(t_stack stack);

// Operations with output
void	px(t_stack *s1, t_stack *s2, char x);
void	rx(t_stack stack, char x);
void	rr(t_stack a, t_stack b);
void	rrx(t_stack a, char x);

/* Utils */

// bools
bool	is_number(char *str);
bool	is_sorted(t_stack stack);
bool	is_broadly_sorted(t_stack stack);
bool	has_value_ranged(t_stack stack, int max);

// Int Utils
int		min(int a, int b);
int		sum(int *array, int index);
int		find_next_num_pos(t_stack stack, int num);

// Chunks
int		get_chunk_size(int size);

// Array Int Utils
int		array_min(t_stack stack);
int		array_max(t_stack stack);
int		get_pos(t_stack stack, int target);

void	print_arrays(t_stack s1, t_stack s2);

#endif
