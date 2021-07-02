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

int				selection_sort(t_stack *a, t_stack *b, int size)
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