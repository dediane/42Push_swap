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

int		sort_five_value(t_stack *a, t_stack *b, int size);
void	put_smallest_value_in_b_bis(int pos, t_stack *a, t_stack *b);
void	put_smallest_value_in_b(int pos, t_stack *a, t_stack *b);

#endif
