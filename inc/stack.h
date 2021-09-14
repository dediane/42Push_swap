/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:18:34 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/14 17:18:39 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_unit
{
	int				data;
	struct s_unit	*next;
}				t_unit;

typedef struct s_stack
{
	struct s_unit	*head;
}				t_stack;

#endif
