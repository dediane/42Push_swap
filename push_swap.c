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

int main(int ac, char **av)
{
int size;
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	size = ac;
	if (ac == 1)
			return (0);
	if (!(ft_check_int(av, ac)))
	{
			ft_putstr("Error, only integer\n");
			return (0);
	}
	a = init();
	b = init();
	while (--size > 0)
	{
		ft_stack(a, ft_atoi(av[size]));
	}
	if (ft_check_double(a))
	{
		ft_putstr("Error, double value\n");
		return (0);
	}
	size = ac - 1;
	if (size == 3)
		sort_three_value(a, b);
	else if (size == 5)
	{
		selection_sort(a, b, size);
	}
	else
	{
		printf("ALGORITHME A CREER\n");
	}
	printf("stack A \n");
	read_stack(a);
	printf("stack B \n");
	read_stack(b);
	free(a);
	free(b);
	return (0);
}
