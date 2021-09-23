/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt@student.42.fr <ddecourt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:11:32 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/23 14:45:15 by ddecourt         ###   ########.fr       */
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

int	sort_data(t_stack *a, t_stack *b, int s)
{
	if (s == 2)
	{
		if (a->head->data > a->head->next->data)
			sa(a);
	}
	else if (s == 3)
		sort_three_value(a, b);
	else if (s == 5 || s == 4)
		sort_five_value(a, b, s);
	else if (s < 105 && s > 5)
		better_selection_sort(a, b, s);
	else
		optimize_algorithm(a, b, s);
	return (0);
}

int	ft_free(t_stack *a, t_stack *b, char **parsing)
{
	if (a != NULL)
		free_stack(a);
	if (b != NULL)
		free_stack(b);
	if (parsing != NULL)
		ft_clear_tab(&parsing);
	return (0);
}

int	ft_get_arg_tab(char *s, char ***parsing, int *size)
{
	*parsing = ft_parse_arg(s);
	*size = ft_get_size(*parsing);
	return (0);
}

int	main(int ac, char **av)
{
	int		s;
	int		flag;
	char	**parsing;
	t_stack	*a;
	t_stack	*b;

	a = init();
	b = init();
	s = ac;
	flag = 0;
	if (ac == 1)
		return (ft_free(a, b, NULL), (0));
	if (ac == 2)
		ft_get_arg_tab(av[1], &parsing, &s);
	else
		parsing = ft_parse(av, s);
	if (!(ft_check_int(parsing, s, -1, 0)))
		return ((ft_free(a, b, parsing)), (0));
	while (--s > 0)
		ft_stack(a, ft_atoi_ps(parsing[s], &flag, 1, 0));
	s = ft_get_size(parsing) - 1;
	if ((s != 0) && !(c_flag(flag) && !(chk_double(a, 0)) && !(chk_sorted(a))))
		sort_data(a, b, s);
	ft_free(a, b, parsing);
	return (0);
}
