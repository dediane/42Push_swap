/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_set3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:28:37 by ddecourt          #+#    #+#             */
/*   Updated: 2021/05/26 22:27:22 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate_stack(a, b);
	reverse_rotate_stack(b, a);
	write(1, "rrr\n", 4);
	return (0);
}
