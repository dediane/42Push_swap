/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mediane.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:10:28 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/09 16:10:59 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_MEDIANE_H
# define GET_MEDIANE_H

int	get_mediane(t_stack *stack, int size);
int	is_divided_a(t_stack *stack, int pivot);
int	is_divided_b(t_stack *stack, int pivot);
void 	split_stack_b(t_stack *a, t_stack *b, int size);
void 	split_stack_a(t_stack *a, t_stack *b, int size);

#endif
