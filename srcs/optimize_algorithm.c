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

t_stack *sort_biggest_pos(t_stack *a, t_stack *b, int size, int biggest)
{
    int diff;

    diff = size - biggest;
    if (biggest == 1)
        sb(b);
    if ((diff > biggest) && (biggest != 1))
    {
        while (biggest-- > 0)
            rb(a, b);
    }
    else if ((diff <= biggest) && (biggest != 1))
    {
        while (diff-- > 0)
            rrb(a, b);
    }
    pa (a, b);
    return (a);
}

t_stack *sort_smallest_pos(t_stack *a, t_stack *b, int size, int smallest)
{
    int diff;

    diff = size - smallest;
    if (smallest == 1)
        sb(b);
    if ((diff < smallest) && (smallest != 1))
    {
        while (diff-- > 0)
            rrb(a, b);

    }
    else if ((diff >= smallest) && (smallest != 1))
    {
        while (smallest-- > 0)
            rb(a, b);
    }
    pa(a, b);
    ra(a, b);
    return (a);
}

/* int get_mediane_pos(t_stack *stack, int mediane)
{
    int index;
    t_unit *current;

    index = -1;
    current = stack->head;
    while (current != NULL)
    {
        if (current->data == mediane)
            return (index);
        index++;
        current = current->next;
    }
    return (0);
}
 */
int sort_chunk_in_b(t_stack *a, t_stack *b, int size)
{
    int mediane;
    int biggest;
     int smallest; 
    int i;
    t_unit *current;

    mediane = get_mediane(b, size);
    current = b->head;
    biggest = find_biggest_position(b);
    i = 0;
    while (i++ < size / 2)
    {
        biggest = find_biggest_position(b);
        a = sort_biggest_pos(a, b, get_stack_size(b), biggest);
    }
    while(i < size)
    {
        smallest = find_smallest_position(b);
        a = sort_smallest_pos(a, b, get_stack_size(b), smallest); 
        i++;
    }
    i = -1;
    while (++i < size / 2)
        ra(a, b);
    return (0);
}

int rotate_sorted_chunk_in_a(t_stack *a, t_stack *b, int size)
{
    while (size-- > 0)
        ra(a, b);
    return (0);
}

int puts_chunck_in_b(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pb(a, b);
	return (0);
}

int puts_last_chunk_in_b(t_stack *a, t_stack *b, int size, int min_value)
{
    while (--size > 0)
        pb(a, b);
    while (a->head->data != min_value)
        pb(a, b);
    return(0);
}

int puts_chunck_in_a(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pa(a, b);
	return (0);
}

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

int optimize_algorithm(t_stack *a, t_stack *b, int size)
{
        int chunk_div;
        int chunk;
        int i;
        int min_value;

        i = 1;
        
        split_stack_a(a, b, size);
        split_stack_a(a, b, get_stack_size(a));
        puts_chunck_in_a(a, b, get_stack_size(a));
        split_stack_b(a, b, get_stack_size(b));
        min_value = get_min_value(b);
        printf("Min value = %i\n", min_value);

        chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div - i);
        puts_chunck_in_b(a, b, chunk);


        chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div  - i);
        puts_chunck_in_b(a, b, chunk);

        chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div - i);
        
        
        puts_last_chunk_in_b(a, b, chunk, min_value);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);



        return (0);
}