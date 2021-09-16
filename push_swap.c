/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:11:32 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:11:35 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_data(t_stack *a, t_stack *b, int size)
{
	if (size == 2)
	{
		if (a->head->data > a->head->next->data)
			sa(a);
	}
	else if (size == 3)
		sort_three_value(a, b);
	else if (size <= 10)
		selection_sort_a(a, b, size);
	else if (size < 105 && size > 10)
		better_selection_sort(a, b, size);
	else
		optimize_algorithm(a, b, size);
	return (0);
}

int	check_if_sorted(t_stack *a)
{
	t_unit	*current;

	current = a->head;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	size = ac;
	if (ac == 1 || ac == 2)
		return (0);
	if (!(ft_check_int(av, ac)))
	{
		ft_putstr("Error, only integer\n");
		return (0);
	}
	a = init();
	b = init();
	while (--size > 0)
		ft_stack(a, ft_atoi(av[size]));
	size = ac - 1;
	if (!(check_if_sorted(a)) && !(ft_check_double(a, 0)))
		sort_data(a, b, size);
	free_stack(a);
	free_stack(b);
	return (0);
}
