/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:24:54 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/09 17:24:56 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_UTILS_H
# define ALGORITHM_UTILS_H

int rotate_sorted_chunk_in_a(t_stack *a, t_stack *b, int size);
int puts_chunk_in_b(t_stack *a, t_stack *b, int size);
int puts_chunk_in_a(t_stack *a, t_stack *b, int size);

#endif
