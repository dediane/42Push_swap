/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:13:52 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:13:56 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_smallest(t_stack *a, t_stack *b, int size, int smallest)
{
	int			diff;
	t_unit		*current;

	current = a->head;
	if (current == NULL)
		return (1);
	diff = size - smallest;
	if (diff < smallest)
	{
		while (diff-- > 0)
			rra(a, b);
		pb(a, b);
	}
	else
	{
		while (smallest-- > 0)
			ra(a, b);
		pb(a, b);
	}
	return (0);
}

int	sort_biggest(t_stack *a, t_stack *b, int size, int biggest)
{
	int	diff;

	diff = size - biggest;
	if (diff > biggest)
	{
		while (biggest-- > 0)
			rb(a, b);
		pa(a, b);
	}
	else
	{
		while (diff-- > 0)
			rrb(a, b);
		pa(a, b);
	}
	return (0);
}

int	selection_sort_a(t_stack *a, t_stack *b, int size)
{
	int	smallest;
	int	i;

	i = size;
	while (i > 0)
	{
		smallest = find_smallest_position(a);
		sort_smallest(a, b, i, smallest);
		i--;
	}
	return (0);
}

int	selection_sort_b(t_stack *a, t_stack *b, int size)
{
	int	biggest;
	int	i;

	i = size;
	while (i > 0)
	{
		biggest = find_biggest_position(b);
		sort_biggest(a, b, i, biggest);
		i--;
	}
	return (0);
}

int	better_selection_sort(t_stack *a, t_stack *b, int size)
{
	split_stack_a(a, b, size);
	selection_sort_a(a, b, get_stack_size(a));
	selection_sort_b(a, b, get_stack_size(b));
	return (0);
}
