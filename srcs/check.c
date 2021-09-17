/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:13:34 by ddecourt          #+#    #+#             */
/*   Updated: 2021/06/28 12:15:45 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_int(char **s, int max)
{
	int	i;

	i = -1;
	while (--max > 1)
	{
		while (s[max][++i])
		{
			if (s[max][i] > 57 || s[max][i] < 48)
			{
				if (s[max][i] != 45)
				{
					ft_putstr("Error, only integer\n");
					return (0);
				}
			}
		}
	}
	return (1);
}

int	ft_check_double(t_stack *s, int flag)
{
	t_unit	*tmp;
	t_unit	*current;

	tmp = s->head;
	while (tmp != NULL)
	{
		current = s->head;
		while (current != NULL)
		{
			if (current->data == tmp->data)
			{
				flag++;
				if (flag > 1)
				{
					ft_putstr("Error, double value.\n");
					return (1);
				}
			}
			current = current->next;
		}
		flag = 0;
		tmp = tmp->next;
	}
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

int	c_flag(int flag)
{
	if (flag == 1)
	{
		ft_putstr("Error, invalid integer\n");
		return (1);
	}
	else
		return (0);
}
