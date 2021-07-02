/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:17:40 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:17:41 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_FUNC2_H
# define STACK_FUNC2_H

int stack_push(t_stack *a, t_stack *b);
int rotate_stack(t_stack *a, t_stack *b);
int reverse_rotate_stack(t_stack *a, t_stack *b);
int get_stack_size(t_stack *stack);
int	sort_three_value(t_stack *a, t_stack *b);

#endif