/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhenming <zhewu@student.42tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:10 by zhenming          #+#    #+#             */
/*   Updated: 2026/01/18 17:11:58 by zhenming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

void	core(int *numbers, int size);

// Operations
void	swap(int *arr, int size);
void	push(int *arr1, int *size1, int *arr2, int *size2);
void	rotate(int *arr, int size);
void	rotate_reversed(int *arr, int size);

// Utils
bool	is_number(char *str);
bool	is_sorted(int *arr, int size);

#endif
