/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:10 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/21 19:14:22 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

void	core(int *numbers, int size);
void	sort(int *arr, int size, char c);
void	insert(int *arr1, int size1, int *arr2, int size2);

// Operations
void	swap(int *arr, int size);
void	push(int *arr1, int *size1, int *arr2, int *size2);
void	rotate(int *arr, int size);
void	rotate_reversed(int *arr, int size);

// Utils
bool	allow_push(int *arr1, int size1, int num);
bool	is_number(char *str);
bool	is_sorted(int *arr, int size);
bool	is_imperfectly_sorted(int *arr, int size);
int		array_min(int *arr, int size);
int		array_max(int *arr, int size);
int		min_pos(int *arr, int size);

#endif
