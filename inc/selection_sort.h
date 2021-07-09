/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:17:06 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:17:08 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELECTION_SORT_H
# define SELECTION_SORT_H

int sort_smallest(t_stack *a, t_stack *b, int size, int smallest);
int selection_sort_a(t_stack *a, t_stack *b, int size);
int selection_sort_b(t_stack *a, t_stack *b, int size);
int better_selection_sort(t_stack *a, t_stack *b, int size);
int	find_biggest_position(t_stack *stack);
int	find_smallest_position(t_stack *stack);
void 	split_stack_b(t_stack *a, t_stack *b, int size);
void 	split_stack_a(t_stack *a, t_stack *b, int size);

#endif