/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:13:45 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/07 17:13:47 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*int puts_last_chunk_in_b(t_stack *a, t_stack *b, int size, int min_value)
{
    while (--size > 0 && (a != NULL))
        pb(a, b);
    if (a != NULL)
    {
        while (a->head->data != min_value)
            pb(a, b);
    }
    return(0);
}*/

int get_min_value(t_stack *stack)
{
    int min;
    t_unit *current;
    
    current = stack->head;
    min = 0;
    while (current != NULL)
    {
        if (current->data < min)
            min = current->data;
        current = current->next;
    }
    return (min);
}

int sort_first_half(t_stack *a, t_stack *b, int chunk, int chunk_div)
{
    int j;
    int i;

    j = -1;
    i = 1;
    while (++j < 2)
    {
        chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunk_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div - i);
        puts_chunk_in_b(a, b, chunk);
    }
    return (0);
}

int check_even_size(int size)
{
    if (size % 2 == 0)
        return (1);
    else
        return (0);
}

int optimize_algorithm(t_stack *a, t_stack *b, int size)
{
        /*int chunk_div;
        int chunk;*/
        int i;
        int j;
        int min_value;

        i = 0;
        j = -1;
        
        split_stack_a(a, b, size);
        printf("Taille de la stack A -> %i\n\n", get_stack_size(a));
        printf("Taille de la stack B -> %i\n\n", get_stack_size(b));
        split_stack_a(a, b, get_stack_size(a));
        puts_chunk_in_a(a, b, get_stack_size(a));
        split_stack_b(a, b, get_stack_size(b));
        min_value = get_min_value(b);

        /*sort_first_half(a, b, 0, 0);*/
        /*while (++j < 3)
        {
            chunk = get_stack_size(b);
            split_stack_b(a, b, get_stack_size(b));
            chunk_div = get_stack_size(b);
            selection_sort_b(a, b, get_stack_size(b));
            rotate_sorted_chunk_in_a(a, b, chunk_div);
            puts_chunk_in_b(a, b, chunk_div);
            chunk_div = get_stack_size(b);
            selection_sort_b(a, b, get_stack_size(b));
            rotate_sorted_chunk_in_a(a, b, chunk_div - i);
            puts_chunk_in_b(a, b, chunk);
        }*/
        /*puts_last_chunk_in_b(a, b, chunk, min_value);*/
        /*split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunk_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div - i);*/
        return (0);
}