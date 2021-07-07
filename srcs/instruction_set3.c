/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_set3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:28:37 by ddecourt          #+#    #+#             */
/*   Updated: 2021/05/26 22:27:22 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate_stack(a, b);
	reverse_rotate_stack(b, a);
	write(1, "rrr\n", 4);
	return (0);
}

int	free_stack(t_stack *stack)
{
	t_unit *unit_to_free;

	unit_to_free = stack->head;
	while ((stack->head != NULL) && (stack != NULL))
	{
		stack->head = stack->head->next;
		free(unit_to_free);
		unit_to_free = stack->head;
	}
	free(unit_to_free);
	free(stack);
	return (0);
}
