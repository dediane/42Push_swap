/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:24:32 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 14:24:34 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*int	is_sorted(t_stack *stack)
{
	t_unit *current;
	t_unit *next;
	int tmp;
	int tmp2;

	current = stack->head;
	next = current->next;
	while (next != NULL)
	{
		tmp = current->data;
		tmp2 = next->data;
		if (tmp > tmp2)
			return (0);
		current = next;
		next = current->next;
	}
	return (1);
}

int	is_sorted_reverse(t_stack *stack)
{
	t_unit *current;
	t_unit *next;
	int tmp;
	int tmp2;

	current = stack->head;
	next = current->next;
	while (next != NULL)
	{
		tmp = current->data;
		tmp2 = next->data;
		if (tmp < tmp2)
			return (0);
		current = next;
		next = current->next;
	}
	return (1);
}

int	rev_sort_three_value_long(t_stack *a, t_stack *b)
{
		t_unit *current;
		int i;
		int j;
		int k;

		current = a->head;
		i = current->data;
		j = current->next->data;
		k = current->next->next->data;
		if ((i < j) && (j < k))
		{
				sa(a);
				pb(a, b);
				sa(a);
				pb(a,b);
				sb(b);
				pa(a, b);
				pa(a, b);
		}
		if ((i > j) && (j < k) && (i > k))
		{
				pb(a, b);
				sa(a);
				pa(a, b);
		}
		if ((i < j) && (j > k) && (i > k))
				sa(a);
		if ((i < j) && (j > k) && (i < k))
		{
				sa(a);
				pb(a, b);
				sa(a);
				pa(a, b);
		}
		if ((i > j) && (j < k) && (i < k))
		{
				pb(a, b);
				sa(a);
				pb(a,b);
				sb(b);
				pa(a, b);
				pa(a, b);
		}
		return (1);
}

int	revert_sort_three_value(t_stack *a, t_stack *b)
{
		t_unit *current;
		int i;
		int j;
		int k;

		current = b->head;
		i = current->data;
		j = current->next->data;
		k = current->next->next->data;
		if ((i < j) && (j < k))
		{
				sb(b);
				rrb(a, b);
		}
		if ((i > j) && (j < k) && (i > k))
		{
				sb(b);
				rb(a, b);
		}
		if ((i < j) && (j > k) && (i > k))
				sb(b);
		if ((i < j) && (j > k) && (i < k))
				rb(a, b);
		if ((i > j) && (j < k) && (i < k))
				rrb(a, b);
		return (1);
}

void	sort_last_value(t_stack *a, t_stack *b)
{
	int size;
	size = get_stack_size(b);
	if (size == 3)
		revert_sort_three_value(b, a);
	if (size == 2)
	{
		if(!(is_biggest(b, b->head->data)))
			sb(b);
	}
	while (b->head != NULL)
		pa(a, b);
}*/

/*int quicksort(t_stack *a, t_stack *b, int size)
{
	int tmp;
	int tmp2;

    sort_stack_a(a, b, size);
	tmp = get_stack_size(a);
	sort_stack_b(a, b, size - tmp);
	tmp2 = get_stack_size(b);
	sort_stack_a(a, b, size - tmp - tmp2);
	while (check_biggest_position(b) < 3)
	{
		while (is_biggest(b, b->head->data))
			pa(a, b);
		rev_sort_three_value_long(b, a);
	}*/
	/*pos = check_biggest_position(b);
	size = get_stack_size(b);
	if (pos > size/2)
	{
		while(--pos > -1)
			rb(a, b);
	}
	else
	{
		while(--pos > -1)
			rrb(a, b);
	}*/
	/*while (b->head != NULL && (get_stack_size(b) >= 3))
	{
		while ((b->head != NULL) && (check_biggest_position(b) < 3))
		{
			while ((b->head != NULL) && (is_biggest(b, b->head->data)))
				pa(a, b);
			if ((b->head != NULL) && (get_stack_size(b) >= 3))
				rev_sort_three_value_long(b, a);
		}
		bring_biggest_on_top(a, b);
	}*/
	/*if (b->head != NULL)
		sort_last_value(a, b);*/
	/*{
		if(get_stack_size(b) == 3)
		{
			revert_sort_three_value(b, a);
			pa(a, b);
			pa(a, b);
			pa(a, b);
		}
		if(get_stack_size(b) == 2)
		{

		}
	}
    return (0);
}*/