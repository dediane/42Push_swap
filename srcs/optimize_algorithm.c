/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:13:45 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/07 17:13:47 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int sort_eight(t_stack *a, t_stack *b, int eight)
{
	puts_chunk_in_b(a, b, eight);
	selection_sort_b(a, b, eight);
	rotate_sorted_chunk_in_a(a, b, eight);
	return (0);
}

int sort_half(t_stack *a, t_stack *b, int size)
{
	int quarter;
	int eight;

	split_stack_b(a, b, size);
	quarter = get_stack_size(b);
	split_stack_b(a, b, quarter);
	eight = get_stack_size(b);
	selection_sort_b(a, b, eight);
	rotate_sorted_chunk_in_a(a, b, eight);
	sort_eight(a, b, quarter - eight);
	quarter = size - quarter;
	puts_chunk_in_b(a, b, quarter);
	split_stack_b(a, b, quarter);
	eight = get_stack_size(b);
	selection_sort_b(a, b, eight);
	rotate_sorted_chunk_in_a(a, b, eight);
	sort_eight(a, b, quarter - eight);
	return (0);
}

int optimize_algorithm(t_stack *a, t_stack *b, int size)
{
	int x;

	split_stack_a(a, b, size);
	x = get_stack_size(b);
	sort_half(a, b, x);
	x = size - x;
	puts_chunk_in_b(a, b, x);
	sort_half(a, b, x);
	return (0);
}
