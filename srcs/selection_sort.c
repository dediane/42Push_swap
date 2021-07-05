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

int				get_smallest(t_stack *a, int index)
{
	t_unit		*current;
	int			tmp;
	int			index_tmp;

	current = a->head;
	if (current == NULL)
		return (-1);
	tmp = current->data;
	index_tmp = 1;
	while (current != NULL)
	{
		if (current->data < tmp)
		{
			tmp = current->data;
			index = index_tmp;
		}
		index_tmp++;
		current = current->next;
	}
	return (index);
}

t_stack			*sort_smallest(t_stack *a, t_stack *b, int size, int smallest)
{
	int			diff;
	t_unit		*current;

	current = a->head;
	if (current == NULL)
		return (a);
	diff = size - smallest;
	if (diff < smallest)
	{
		while (diff-- > -1)
			rra(a, b);
		pb(a, b);
	}
	else
	{
		while (smallest-- > 1)
			ra(a, b);
		pb(a, b);
	}
	return (a);
}

int				selection_sort_a(t_stack *a, t_stack *b, int size)
{
    int smallest;
    int i;

    i = size;
    while (i > 1)
    {
		smallest = get_smallest(a, 0);
		a = sort_smallest(a, b, i, smallest);
		i--;
    }
    i = size ;
    while( i-- > 1)
		pa(a,b);
	return (0);
}

int				selection_sort_b(t_stack *a, t_stack *b)
{
	if (is_biggest(b, b->head->data))
		pa(a, b);
	while(b->head != NULL)
	{
		bring_biggest_on_top(a, b);
		pa(a, b);
	}
	return(0);
}

void 	split_stack(t_stack *a, t_stack *b, int size)
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
}

int		better_selection_sort(t_stack *a, t_stack *b, int size)
{

	split_stack(a, b, size);
	/*selection_sort(b, a, get_stack_size(b));*/
	selection_sort_a(a, b, get_stack_size(a));
	selection_sort_b(a, b);
	return(0);
}