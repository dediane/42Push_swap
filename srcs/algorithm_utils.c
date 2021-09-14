/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:22:11 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/09 19:25:30 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate_sorted_chunk_in_a(t_stack *a, t_stack *b, int size)
{
	while (size-- > 0)
		ra(a, b);
	return (0);
}

int	puts_chunk_in_b(t_stack *a, t_stack *b, int size)
{
	while (size-- > 0)
		pb(a, b);
	return (0);
}

int	puts_chunk_in_a(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pa(a, b);
	return (0);
}

int	find_smallest_position(t_stack *stack)
{
	int		value;
	int		position;
	int		i;
	t_unit	*current;

	current = stack->head;
	value = current->data;
	position = 0;
	i = 0;
	while (current != NULL)
	{
		if (current->data < value)
		{
			value = current->data;
			position = i;
		}
		i++;
		current = current->next;
	}
	return (position);
}

int	find_biggest_position(t_stack *stack)
{
	int		value;
	int		position;
	int		i;
	t_unit	*current;

	current = stack->head;
	value = current->data;
	position = 0;
	i = 0;
	while (current != NULL)
	{
		if ((current->data > value))
		{
			value = current->data;
			position = i;
		}
		i++;
		current = current->next;
	}
	return (position);
}
