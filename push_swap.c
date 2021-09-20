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

int	ft_atoi_ps(const char *str, int *flag, int j, long long int nb)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - 48);
	nb = nb * j;
	if ((nb > 2147483647) || (nb < -2147483648 ))
		*flag = 1;
	return ((int)nb);
}

int	sort_data(t_stack *a, t_stack *b, int size)
{
	if (size == 2)
	{
		if (a->head->data > a->head->next->data)
			sa(a);
	}
	else if (size == 3)
		sort_three_value(a, b);
	else if (size == 5 || size == 4)
		sort_five_value(a, b, size);
	else if (size < 105 && size > 5)
		better_selection_sort(a, b, size);
	else
		optimize_algorithm(a, b, size);
	return (0);
}

int	ft_free(t_stack *a, t_stack *b)
{
	if (a != NULL)
		free_stack(a);
	if (b != NULL)
		free_stack(b);
	return (0);
}

int	main(int ac, char **av)
{
	int		size;
	int		flag;
	char	**parsing;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	size = ac;
	flag = 0;
	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		parsing = ft_parse_arg(av[1]);
		size = ft_get_size(parsing);
	}
	else
		parsing = ft_parse(av, size);
	if (!(ft_check_int(parsing, size, -1, 0)))
		return (0);
	a = init();
	b = init();
	while (--size > 0)
		ft_stack(a, ft_atoi_ps(parsing[size], &flag, 1, 0));
	if (ac != 2)
		size = ac - 1;
	else
		size = ft_get_size(parsing) - 1;
	if (!(ft_check_double(a, 0)) && !(check_if_sorted(a)) && !(c_flag(flag)))
		sort_data(a, b, size);
	return (0);
}
