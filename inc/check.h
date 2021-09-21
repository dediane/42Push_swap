/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:16:05 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:16:07 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

# include "../push_swap.h"

int	ft_check_int(char **s, int max, int i, int flag);
int	ft_check_double(t_stack *s, int flag);
int	check_if_sorted(t_stack *a);
int	c_flag(int flag);

#endif