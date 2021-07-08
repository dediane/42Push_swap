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
		selection_sort_a(a, b, size);
	}
	else if (size < 105)
	{
		/*split_stack_a(a, b, size);*/
		optimize_algorithm(a, b, size); 
		/*better_selection_sort(a, b, size); */
	}
	else
	{
		optimize_algorithm(a, b, size);
	}
	
	/*printf("stack A \n");
	read_stack(a);
	printf("stack B \n");
	read_stack(b);*/
	free_stack(a);
	free_stack(b);
	return (0);
}
