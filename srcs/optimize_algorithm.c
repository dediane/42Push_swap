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

int is_even(int size)
{
    if (size % 2 == 0)
        return (1);
    return (0);
}

int optimize_algorithm(t_stack *a, t_stack *b, int size)
{
    int x;
    int y;
    int z;

    split_stack_a(a, b, size);
    x = get_stack_size(b);
    split_stack_b(a, b, x);
    y = get_stack_size(b);
    split_stack_b(a, b, y);
    z = get_stack_size(b);
    selection_sort_b(a, b, z);
    rotate_sorted_chunk_in_a(a, b, z);
    puts_chunk_in_b(a, b, (y - z));
    selection_sort_b(a, b, (y - z));
    rotate_sorted_chunk_in_a(a, b, (y - z));

    return (1);
}