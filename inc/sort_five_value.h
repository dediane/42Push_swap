/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_value.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:17:59 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/17 19:18:02 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FIVE_VALUE_H
# define SORT_FIVE_VALUE_H

int	sort_five_value(t_stack *a, t_stack *b, int size);
int	final_sort_2(t_stack *a, t_stack *b, int i, int j);
int	final_sort(t_stack *a, t_stack *b);
int	sort_middle2_pos(t_stack *a, t_stack *b);
int	sort_middle_pos(t_stack *a, t_stack *b);

#endif
