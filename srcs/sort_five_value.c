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

int	final_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = b->head->data;
	j = a->head->next->next->data;
	if (i < a->head->data)
		pa(a, b);
	else if (i > a->head->data && i < a->head->next->data)
	{
		pa(a, b);
		sa(a);
	}
	else if (i > a->head->data && i > a->head->next->data && i < j)
	{
		rra(a, b);
		pa(a, b);
		ra(a, b);
		ra(a, b);
	}
	else if (i > j)
	{
		pa(a, b);
		ra(a, b);
	}
	return (0);
}

int	sort_middle_pos(t_stack *a, t_stack *b)
{
	pa(a, b);
	sa(a);
	pb(a, b);
	sa(a);
	pa(a, b);
	return (0);
}

int	sort_middle2_pos(t_stack *a, t_stack *b)
{
	pa(a, b);
	rra(a, b);
	sa(a);
	ra(a, b);
	ra(a, b);
	return (0);
}

int	final_sort_2(t_stack *a, t_stack *b, int i, int j)
{
	int	k;

	k = a->head->next->next->next->data;
	if (i < a->head->data)
		pa(a, b);
	else if (i > a->head->data && i < a->head->next->data)
	{
		pa(a, b);
		sa(a);
	}
	else if (i > a->head->data && i > a->head->next->data && i < j)
	{
		sort_middle_pos(a, b);
	}
	else if (i > j && i < k)
	{
		sort_middle2_pos(a, b);
	}
	else if (i > j && i > k)
	{
		pa(a, b);
		ra(a, b);
	}
	return (0);
}

int	sort_five_value(t_stack *a, t_stack *b, int size)
{
	int	i;

	i = size;
	while (i-- > 3)
		pb(a, b);
	sort_three_value(a, b);
	final_sort(a, b);
	if (size == 5)
		final_sort_2(a, b, b->head->data, a->head->next->next->data);
	return (0);
}
