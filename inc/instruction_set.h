/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_set.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:16:18 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:16:19 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_SET_H
# define INSTRUCTION_SET_H

int	sa(t_stack *a);
int	sb(t_stack *b);
int	ss(t_stack *a, t_stack *b);
int	pa(t_stack *a, t_stack *b);
int	pb(t_stack *a, t_stack *b);

#endif