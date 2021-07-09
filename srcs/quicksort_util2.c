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
    i = 0;
    current = stack->head;
	tmp = current->data;
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