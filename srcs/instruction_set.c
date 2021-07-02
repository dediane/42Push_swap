/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:26:51 by ddecourt          #+#    #+#             */
/*   Updated: 2021/06/28 12:15:57 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack *a)
{
	stack_swap(a);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_stack *b)
{
	stack_swap(b);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_stack *a, t_stack *b)
{
	stack_swap(a);
	stack_swap(b);
	write(1, "ss\n", 3);
	return (0);
}

int	pa(t_stack *a, t_stack *b)
{
	stack_push(b, a);
	write(1, "pa\n", 3);
	return (0);
}

int	pb(t_stack *a, t_stack *b)
{
	stack_push(a, b);
	write(1, "pb\n", 3);
	return (0);
}
