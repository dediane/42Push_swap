/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_util2.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:30:22 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/05 16:30:24 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICKSORT_UTIL2_H
# define QUICKSORT_UTIL2_H 

int	sort_three_value_long(t_stack *a, t_stack *b);
int is_biggest(t_stack *stack, int value);
int check_biggest_position(t_stack *stack);
void	bring_biggest_on_top(t_stack *a, t_stack *b);

#endif
