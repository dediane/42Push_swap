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

int	sort_sixteen(t_stack *a, t_stack *b, int eight, int sixteen)
{
	selection_sort_b(a, b, sixteen);
	rotate_sorted_chunk_in_a(a, b, sixteen);
	puts_chunk_in_b(a, b, eight - sixteen);
	selection_sort_b(a, b, eight - sixteen);
	rotate_sorted_chunk_in_a(a, b, eight - sixteen);
	return (0);
}

int	sort_quarter(t_stack *a, t_stack *b, int eight, int sixteen)
{
	puts_chunk_in_b(a, b, eight);
	split_stack_b(a, b, eight);
	sixteen = get_stack_size(b);
	sort_sixteen(a, b, eight, sixteen);
	return (0);
}

int	sort_half(t_stack *a, t_stack *b, int size)
{
	int	quarter;
	int	eight;
	int	sixteen;

	split_stack_b(a, b, size);
	quarter = get_stack_size(b);
	split_stack_b(a, b, quarter);
	eight = get_stack_size(b);
	split_stack_b(a, b, eight);
	sixteen = get_stack_size(b);
	sort_sixteen(a, b, eight, sixteen);
	eight = quarter - eight;
	sort_quarter(a, b, eight, sixteen);
	quarter = size - quarter;
	puts_chunk_in_b(a, b, quarter);
	split_stack_b(a, b, quarter);
	eight = get_stack_size(b);
	split_stack_b(a, b, eight);
	sixteen = get_stack_size(b);
	sort_sixteen(a, b, eight, sixteen);
	eight = quarter - eight;
	sort_quarter(a, b, eight, sixteen);
	return (0);
}

int	optimize_algorithm(t_stack *a, t_stack *b, int size)
{
	int	x;

	split_stack_a(a, b, size);
	x = get_stack_size(b);
	sort_half(a, b, x);
	x = size - x;
	puts_chunk_in_b(a, b, x);
	sort_half(a, b, x);
	return (0);
}
