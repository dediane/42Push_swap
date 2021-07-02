/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_set2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:16:36 by ddecourt          #+#    #+#             */
/*   Updated: 2021/06/28 12:16:04 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(t_stack *a, t_stack *b)
{
	rotate_stack(a, b);
	write(1, "ra\n", 3);
	return (1);
}

int	rb(t_stack *a, t_stack *b)
{
	rotate_stack(b, a);
	write(1, "rb\n", 3);
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	rotate_stack(a, b);
	rotate_stack(b, a);
	write(1, "rr\n", 3);
	return (1);
}

int	rra(t_stack *a, t_stack *b)
{
	reverse_rotate_stack(a, b);
	write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_stack *a, t_stack *b)
{
	reverse_rotate_stack(b, a);
	write(1, "rrb\n", 4);
	return (1);
}
