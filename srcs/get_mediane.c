/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mediane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:07:54 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/09 16:07:59 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_mediane(t_stack *stack, int size)
{
	int		iterations;
	int		value;
	t_unit	*current;
	t_unit	*next;

	current = stack->head;
	next = current->next;
	iterations = 0;
	value = current->data;
	while (current)
	{
		while (next)
		{
			if (current->data > next->data)
				iterations++;
			next = next->next;
		}
		if (iterations == size / 2)
			return (value);
		iterations = 0;
		value = current->next->data;
		current = current->next;
		next = stack->head;
	}
	return (-1);
}

int	is_divided_a(t_stack *stack, int pivot)
{
	t_unit	*current;

	current = stack->head;
	while (current)
	{
		if (current->data < pivot)
			return (0);
		current = current->next;
	}
	return (1);
}

int	is_divided_b(t_stack *stack, int pivot)
{
	t_unit	*current;

	current = stack->head;
	while (current)
	{
		if (current->data > pivot)
			return (0);
		current = current->next;
	}
	return (1);
}

void	split_stack_a(t_stack *a, t_stack *b, int size)
{
	t_unit	*current;
	int		pivot;

	current = a->head;
	pivot = get_mediane(a, size);
	while (current && !is_divided_a(a, pivot))
	{
		if (current->data <= pivot)
		{
			current = current->next;
			pb(a, b);
		}
		if (current->data > pivot)
		{
			ra(a, b);
			current = a->head;
		}
	}
}

void	split_stack_b(t_stack *a, t_stack *b, int size)
{
	t_unit	*current;
	int		pivot;

	current = b->head;
	pivot = get_mediane(b, size);
	while (current && !is_divided_b(b, pivot))
	{
		if (current->data > pivot)
		{
			current = current->next;
			pa(a, b);
		}
		if (current->data <= pivot)
		{
			rrb(a, b);
			current = b->head;
		}
	}
}
