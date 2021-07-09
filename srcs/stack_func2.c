/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:03:57 by ddecourt          #+#    #+#             */
/*   Updated: 2021/06/04 18:01:43 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_push(t_stack *a, t_stack *b)
{
	int	tmp;

	if (a->head == NULL)
		return (1);
	tmp = ft_unstack(a);
	ft_stack(b, tmp);
	return (0);
}

int	rotate_stack(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ft_unstack(a);
	while (a->head != NULL)
	{
		stack_push(a, b);
		i++;
	}
	ft_stack(a, tmp);
	while (i > 0)
	{
		stack_push(b, a);
		i--;
	}
	return (0);
}

int	reverse_rotate_stack(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	while (a->head != NULL)
	{
		stack_push(a, b);
		i++;
	}
	tmp = ft_unstack(b);
	while (i > 1)
	{
		stack_push(b, a);
		i--;
	}
	ft_stack(a, tmp);
	return (0);
}

int	get_stack_size(t_stack *stack)
{
	t_unit	*current;
	int		size;

	current = stack->head;
	size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

int	sort_three_value(t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	int		k;

	i = a->head->data;
	j = a->head->next->data;
	k = a->head->next->next->data;
	if ((i > j) && (j > k))
	{
		sa(a);
		rra(a, b);
	}
	if ((i < j) && (j > k) && (i < k))
	{
		sa(a);
		ra(a, b);
	}
	if ((i > j) && (j < k) && (i < k))
		sa(a);
	if ((i > j) && (j < k) && (i > k))
		ra(a, b);
	if ((i < j) && (j > k) && (i > k))
		rra(a, b);
	return (1);
}
