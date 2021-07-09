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

typedef	struct	s_chunk_size
{
	int half_a;
	int half_b;
	int quarter_a_1;
	int quarter_a_2;
	int quarter_b_1;
	int quarter_b_2;
	int	eighth_a_1;
	int eighth_a_2;
	int eighth_a_3;
	int eighth_a_4;
	int	eighth_b_1;
	int eighth_b_2;
	int eighth_b_3;
	int eighth_b_4;
}				t_chunk_size;

int optimize_algorithm(t_stack *a, t_stack *b, int size);
int get_min_value(t_stack *stack);

#endif