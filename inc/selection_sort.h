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

int get_smallest(t_stack *a, int index);
t_stack *sort_smallest(t_stack *a, t_stack *b, int size, int smallest);
int selection_sort(t_stack *a, t_stack *b, int size);

#endif