/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 22:21:49 by ddecourt          #+#    #+#             */
/*   Updated: 2021/05/27 13:34:36 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*init(void)
{
	t_stack *stack;

	stack = malloc(sizeof(*stack));
	stack->head = NULL;
	return (stack);
}

void	ft_stack(t_stack *stack, int nbr)
{
	t_unit *new;

	new = malloc(sizeof(*new));
	if (stack == NULL || new == NULL)
	{
		ft_putstr("Error, malloc func failed \n");
		exit(EXIT_FAILURE);
	}
	new->data = nbr;
	new->next = stack->head;
	/*new->before = NULL;
	stack->head->before = new;*/
	stack->head = new;
}

int		ft_unstack(t_stack *stack)
{
	int		unstack_nb;
	t_unit	*unstack_unit;

	if (stack == NULL)
	{
		ft_putstr("Error, malloc func failed \n");
		exit(EXIT_FAILURE);
	}
	unstack_nb = 0;
	unstack_unit = stack->head;
	if (stack != NULL && stack->head != NULL)
	{
		unstack_nb = unstack_unit->data;
		stack->head = unstack_unit->next;
		free(unstack_unit);
	}
	return (unstack_nb);
}

void	read_stack(t_stack *stack)
{
	t_unit *current;

	if (stack == NULL)
	{
		ft_putstr("Error, empty stack \n");
		exit(EXIT_FAILURE);
	}
	current = stack->head;
	while (current != NULL)
	{
		ft_putnbr(current->data);
		write(1, "\n", 1);
		current = current->next;
	}
}

int	stack_swap(t_stack *stack)
{
	int tmp1;
	int tmp2;

	tmp1 = ft_unstack(stack);
	tmp2 = ft_unstack(stack);
	ft_stack(stack, tmp1);
	ft_stack(stack, tmp2);
	return (0);
}
