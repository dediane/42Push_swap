/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:53:27 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/17 18:53:30 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_smallest_value_in_b(int pos, t_stack *a, t_stack *b)
{
	if (pos == 4)
	{
		rra(a, b);
		pb(a, b);
	}
	if (pos == 3)
	{
		rra(a, b);
		rra(a, b);
		pb(a, b);
	}
	if (pos == 2)
	{
		ra(a, b);
		ra(a, b);
		pb(a, b);
	}
	if (pos == 1)
	{
		ra(a, b);
		pb(a, b);
	}
	if (pos == 0)
		pb(a, b);
}

void	put_smallest_value_in_b_bis(int pos, t_stack *a, t_stack *b)
{
	if (pos == 3)
	{
		rra(a, b);
		pb(a, b);
	}
	if (pos == 2)
	{
		rra(a, b);
		rra(a, b);
		pb(a, b);
	}
	if (pos == 1)
	{
		ra(a, b);
		pb(a, b);
	}
	if (pos == 0)
		pb(a, b);
}

int	sort_five_value(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	pos;

	i = size;
	if (size == 5)
	{
		pos = find_smallest_position(a);
		put_smallest_value_in_b(pos, a, b);
		pos = find_smallest_position(a);
		put_smallest_value_in_b_bis(pos, a, b);
		sort_three_value(a, b);
		if (b->head->data < b->head->next->data)
			sb(b);
		pa(a, b);
		pa(a, b);
	}
	if (size == 4)
	{
		pos = find_smallest_position(a);
		put_smallest_value_in_b_bis(pos, a, b);
		sort_three_value(a, b);
		pa(a, b);
	}
	return (0);
}
