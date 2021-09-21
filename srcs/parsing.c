/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt@student.42.fr <ddecourt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:35:55 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/21 11:18:31 by ddecourt@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_size(char **parse)
{
	int	size;

	size = 0;
	while (parse[size] != NULL)
		size++;
	return (size);
}

char	**ft_add_one_arg(char **tmp, int size)
{
	char	**parsing;
	int		i;

	i = 0;
	parsing = malloc(sizeof(char *) * (size + 1));
	if (parsing == NULL)
	{
		ft_putstr("Malloc function failed");
		exit(EXIT_FAILURE);
	}
	parsing[0] = ft_strdup(" ");
	while (++i < size)
		parsing[i] = ft_strdup(tmp[i - 1]);
	parsing[i] = NULL;
	return (parsing);
}

void	ft_clear_tab(char ***s)
{
	int	i;

	i = 0;
	while ((*s)[i])
	{
		free((*s)[i]);
		i++;
	}
	free(*s);
}

char	**ft_parse_arg(char *s)
{
	int		i;
	int		size;
	char	**tmp;
	char	**parsing;

	i = -1; 
	tmp = ft_split(s, ' ');
	size = ft_get_size(tmp);
	parsing = ft_add_one_arg(tmp, size + 1);
	ft_clear_tab(&tmp);
	return (parsing);
}

char	**ft_parse(char **av, int size)
{
	char	**parsing;
	int		i;

	i = -1;
	parsing = malloc(sizeof(char *) * (size + 1));
	if (parsing == NULL)
	{
		ft_putstr("Malloc function failed");
		exit(EXIT_FAILURE);
	}
	while (++i < size)
		parsing[i] = ft_strdup(av[i]);
	parsing[i] = NULL;
	return (parsing);
}
