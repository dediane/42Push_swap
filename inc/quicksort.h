/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:25:09 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 14:25:11 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICKSORT_H
# define QUICKSORT_H

int	is_sorted(t_stack *stack);
int	is_sorted_reverse(t_stack *stack);
int	rev_sort_three_value_long(t_stack *a, t_stack *b);
int	revert_sort_three_value(t_stack *a, t_stack *b);
int quicksort(t_stack *a, t_stack *b, int size);

#endif