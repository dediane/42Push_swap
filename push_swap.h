/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:12:51 by ddecourt          #+#    #+#             */
/*   Updated: 2021/07/02 16:12:56 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct  s_unit
{
    int data;
    struct s_unit   *next;
}               t_unit;

typedef struct s_stack
{
    struct s_unit   *head;
}               t_stack;

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "inc/check.h"
# include "inc/instruction_set.h"
# include "inc/instruction_set2.h"
# include "inc/instruction_set3.h"
# include "inc/stack_func.h"
# include "inc/stack_func2.h"
# include "inc/selection_sort.h"

#endif