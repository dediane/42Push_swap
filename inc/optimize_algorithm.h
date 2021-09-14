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

int	optimize_algorithm(t_stack *a, t_stack *b, int size);
int	sort_half(t_stack *a, t_stack *b, int size);
int	sort_eight(t_stack *a, t_stack *b, int eight);

#endif