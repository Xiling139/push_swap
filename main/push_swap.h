/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:10 by zhenming          #+#    #+#             */
/*   Updated: 2026/02/16 12:53:32 by zhenming         ###   ########.fr       */
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

// Sorting Utils
void	move_to_top(t_stack stack, int pos, char x);
void	optimized_rotate(t_stack a, t_stack b, int pos_a, int pos_b);

// Operations
void	swap(t_stack stack);
void	push(t_stack *s1, t_stack *s2);
void	rotate(t_stack stack);
void	rotate_reversed(t_stack stack);

// Operations with output
void	sx(t_stack stack, char x);
void	px(t_stack *s1, t_stack *s2, char x);
void	rx(t_stack stack, char x);
void	rr(t_stack a, t_stack b);
void	rrx(t_stack a, char x);
void	rrr(t_stack a, t_stack b);

/* Utils */

// bools
bool	is_number(char *str);
bool	is_sorted(t_stack stack);
bool	is_broadly_sorted(t_stack stack);

// Int Utils
int		min(int a, int b);
int		find_nearest_num(t_stack stack, int min);
int		has_value_ranged(t_stack stack, int max);

// Get position
int		get_pos(t_stack stack, int target);
int		find_next_num_pos(t_stack stack, int num);

// Chunks
int		get_chunk_size(int size);

// Array Int Utils
int		array_min(t_stack stack);
int		array_max(t_stack stack);

#endif
