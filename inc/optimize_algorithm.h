/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_algorithm.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:16:49 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/07 17:16:51 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIMIZE_ALGORITHM_H
# define OPTIMIZE_ALGORITHM_H

int optimize_algorithm(t_stack *a, t_stack *b, int size);
/*t_stack *sort_biggest_pos(t_stack *a, t_stack *b, int size, int biggest);
t_stack *sort_smallest_pos(t_stack *a, t_stack *b, int size, int smallest);
int sort_chunk_in_b(t_stack *a, t_stack *b, int size);*/
int rotate_sorted_chunk_in_a(t_stack *a, t_stack *b, int size);
int puts_chunk_in_b(t_stack *a, t_stack *b, int size);
int puts_last_chunk_in_b(t_stack *a, t_stack *b, int size, int min_value);
int puts_chunk_in_a(t_stack *a, t_stack *b, int size);
int get_min_value(t_stack *stack);

#endif