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

int puts_chunck_in_a(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pa(a, b);
	return (0);
}

int optimize_algorithm(t_stack *a, t_stack *b, int size)
{
        /*int i;*/
        /*int size_of_chunk;

        i = 0;
        split_stack_a(a, b, size);
        split_stack_b(a, b, get_stack_size(b));
        size_of_chunk = get_stack_size(b);
        sort_chunk_in_b(a, b, size_of_chunk);
        puts_chunck_in_b(a, b, size_of_chunk);
        sort_chunk_in_b(a, b, size_of_chunk);*/
        /*while (++i < 5)
            split_stack_b(a, b, get_stack_size(b));
        size_of_chunk = get_stack_size(b);
        while (b->head != NULL)
        {
            sort_chunk_in_b(a, b, get_stack_size(b));
        }
        rotate_sorted_chunk_in_a(a, b, size_of_chunk / 2);*/

        /*ESSAI*/
        int chunk_div;
        int chunk;
        
        split_stack_a(a, b, size);
        split_stack_a(a, b, get_stack_size(a));
        puts_chunck_in_a(a, b, get_stack_size(a));
        split_stack_b(a, b, get_stack_size(b));
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div -1);
        puts_chunck_in_b(a, b, chunk_div*2);
        /*split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);*/

        chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div -1);
        puts_chunck_in_b(a, b, chunk);

           chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div -1);
        puts_chunck_in_b(a, b, chunk);

           chunk = get_stack_size(b);
        split_stack_b(a, b, get_stack_size(b));
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div);
        puts_chunck_in_b(a, b, chunk_div);
        chunk_div = get_stack_size(b);
        selection_sort_b(a, b, get_stack_size(b));
        rotate_sorted_chunk_in_a(a, b, chunk_div -1);



        return (0);
}