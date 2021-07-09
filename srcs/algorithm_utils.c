/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:22:11 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/09 17:22:18 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rotate_sorted_chunk_in_a(t_stack *a, t_stack *b, int size)
{
    while (size-- > 0)
        ra(a, b);
    return (0);
}

int puts_chunk_in_b(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pb(a, b);
	return (0);
}

int puts_chunk_in_a(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pa(a, b);
	return (0);
}