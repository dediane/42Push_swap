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

t_stack			*sort_biggest(t_stack *a, t_stack *b, int size, int biggest)
{
	if (biggest > size / 2)
	{
		while(--biggest > -1)
			rb(a, b);
		pa(a, b);
	}
	else
	{
		while (--biggest > 1)
			rrb(a, b);
		pa(a, b);
	}
	return (b);
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

int				selection_sort_b(t_stack *a, t_stack *b, int size)
{
	int biggest;
	int i;

	i = size;
	if (is_biggest(b, b->head->data))
		pa(a, b);
	while(i > 0)
	{
		biggest = check_biggest_position(b);
		b = bring_biggest_on_top(a, b);
		pa(a, b);
		i--;
	}
	return(0);
}

void 	split_stack_a(t_stack *a, t_stack *b, int size)
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

void 	split_stack_b(t_stack *a, t_stack *b, int size)
{
	t_unit *current;
		int pivot;
		int i;

		current = b->head;
		pivot = get_mediane(b, size);
		while (current && !is_divided_b(b, pivot))
		{
				i = 0;
				if (current->data > pivot)
				{
						current = current->next;
						pa(a, b);
				}
				if (current->data <= pivot)
				{
						rrb(a, b);
						i++;
						current = b->head;
				}
		}
}

t_stack	*puts_chunck_in_a(t_stack *a, t_stack *b, int size)
{
	while (--size > 0)
		pa(a, b);
	return (a);
}

int		find_smallest_position(t_stack *stack)
{
	int value;
	int position;
	int i;
	t_unit *current;

	current = stack->head;
	value = current->data;
	position = 0;
	i = 0;
	while (current != NULL)
	{
		if (current->data < value)
		{
			value = current->data;
			position = i;
		}
		i++;
		current = current->next;
	}
	return(position);
}

int		find_biggest_position(t_stack *stack)
{
	int value;
	int position;
	int i;
	t_unit *current;

	current = stack->head;
	value = current->data;
	position = 0;
	i = 0;
	while (current != NULL)
	{
		if (current->data > value)
		{
			value = current->data;
			position = i;
		}
		i++;
		current = current->next;
	}
	return(position);
}

/*PARTIE A REVOIR NON FUNCTIONAL*/
int sort_big_b(t_stack *a, t_stack *b, int position, int size)
{
	if (position == 1)
	{
		sb(b);
		pa(a, b);
		ra(a, b);
		return(0);
	}
	printf("SIZE= %i\n", size);
	if (position > size)
	{
		while (--position > -1)
			rb(a, b);
		pa(a, b);
		ra(a, b);
		return(0);
	}
	if (position < size)
	{
		while (--position > -1)
			rrb(a, b);
		pa(a, b);
		ra(a, b);
		return (0);
	}
	return (1);
}
int	sort_chunk_in_b(t_stack *a, t_stack *b, int size)
{
	int pos_biggest;
	int pos_smallest;

	pos_biggest = find_biggest_position(b);
	printf("BIGGEST POSITION -> %i\n", pos_biggest);
	pos_smallest = find_smallest_position(b);
	sort_big_b(a, b, pos_biggest, size/2);
	/*sort_small_b(a, b, pos_smallest, size/2);*/
	return (0);
}

int		better_selection_sort(t_stack *a, t_stack *b, int size)
{
	split_stack_a(a, b, size);
	printf("STACK A\n");
	read_stack(a);
	printf("\nSTACK B\n");
	read_stack(b);
	sort_chunk_in_b(a, b, get_stack_size(b));

	return(0);
}