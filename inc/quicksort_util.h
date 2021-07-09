/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_util.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:25:26 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 14:25:28 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICKSORT_UTIL_H
# define QUICKSORT_UTIL_H

int	get_mediane(t_stack *stack, int size);
int	is_divided_a(t_stack *stack, int pivot);
int	is_divided_b(t_stack *stack, int pivot);

#endif