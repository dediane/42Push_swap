/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:24:44 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 14:24:46 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int sort_stack_a(t_stack *a, t_stack *b, int size)
{
		t_unit *current;
		int pivot;
		int i;

		current = a->head;
		pivot = get_mediane(a, size);
		while (current && !is_divided_a(a, pivot))
		{
				i = 0;
				if (current->data < pivot)
				{
						current = current->next;
						pb(a, b);
				}
				if (current->data >= pivot)
				{
						rra(a, b);
						i++;
						current = a->head;
				}
		}
		while (i > 0)
		{
			ra(a, b);
			i--;
		}
		if (get_stack_size(a) > 2)
		{
			sort_three_value_long(a, b);
		}
		else
		{
			if ( a->head->data > a->head->next->data)
				sa(a);
		}
		while (size > 3)
				return (sort_stack_a(a, b, size/2));
		return(a->head->data);
}

int	sort_stack_b(t_stack *a, t_stack *b, int size)
{
		t_unit *current;
		int pivot;
		int i;

		current = b->head;
		i = 0;
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
						i++;
						current = b->head;
				}
		}
		while (i > 0)
		{
			rb(a, b);
			i--;
		}
		if (get_stack_size(b) > 2)
			rev_sort_three_value_long(a, b);
		else
		{
			if ( b->head->data < b->head->next->data)
				sb(b);
		}
		while (size > 3)
		{
				return (sort_stack_b(a, b, size/2));
		}
		return (0);
}

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