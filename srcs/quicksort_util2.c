/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_util2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:30:40 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 16:30:44 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_three_value_long(t_stack *a, t_stack *b)
{
		t_unit *current;
		int i;
		int j;
		int k;

		current = a->head;
		i = current->data;
		j = current->next->data;
		k = current->next->next->data;
		if ((i > j) && (j > k))
		{
				sa(a);
				pb(a, b);
				sa(a);
				pb(a,b);
				sb(b);
				pa(a, b);
				pa(a, b);
		}
		if ((i < j) && (j > k) && (i < k))
		{
				pb(a, b);
				sa(a);
				pa(a, b);
		}
		if ((i > j) && (j < k) && (i < k))
				sa(a);
		if ((i > j) && (j < k) && (i > k))
		{
				sa(a);
				pb(a, b);
				sa(a);
				pa(a, b);
		}
		if ((i < j) && (j > k) && (i > k))
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

int is_biggest(t_stack *stack, int value)
{
    t_unit *current;

    current = stack->head;
    while(current != NULL)
    {
        if (current->data > value)
            return(0);
        current = current->next;
    }
    return (1);
}

int check_biggest_position(t_stack *stack)
{
    int index;
    int tmp;
    int i;
    t_unit *current;

    index = 0;
    tmp = 0;
    i = 0;
    current = stack->head;
    while (current != NULL)
    {
        if (tmp < current->data)
        {
            tmp = current->data;
            index = i;
        }
        current = current->next;
        i++;
    }
    return (index);
}

void	bring_biggest_on_top(t_stack *a, t_stack *b)
{
	int pos;
	int size;

	pos = check_biggest_position(b);
	size = get_stack_size(b);
	if (pos > size /2)
	{
		while (--pos > -1)
			rb(a, b);
	}
	else
	{
		while (--pos > -1)
			rrb(a, b);
	}
}