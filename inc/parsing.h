/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:36:19 by ddecourt          #+#    #+#             */
/*   Updated: 2021/09/20 15:36:21 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

char	**ft_parse_arg(char *s);
int		ft_get_size(char **parse);
char	**ft_add_one_arg(char **tmp, int size);
char	**ft_parse(char **av, int size);

#endif
