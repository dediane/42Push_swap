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
	int i;
	int iterations;
	int value;
	t_unit *current;
	t_unit *next;

	current = stack->head;
	next = current->next;

	i = size/2;
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
			if (iterations == i)
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
	t_unit *current;

	current = stack->head;
	while(current)
	{
		if (current->data < pivot)
			return (0);
		current = current->next;
	}
	return (1);
}

int	is_divided_b(t_stack *stack, int pivot)
{
	t_unit *current;

	current = stack->head;
	while (current)
	{
		if (current->data > pivot)
			return(0);
		current = current->next;
	}
	return (1);
}
