/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:18:19 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:18:21 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_FUNC_H
# define STACK_FUNC_H

t_stack	*init(void);
void	ft_stack(t_stack *stack, int nbr);
int		ft_unstack(t_stack *stack);
void	read_stack(t_stack *stack);
int		stack_swap(t_stack *stack);

#endif
