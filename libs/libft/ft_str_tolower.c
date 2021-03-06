/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:15:57 by biremong          #+#    #+#             */
/*   Updated: 2017/05/22 12:15:59 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_tolower(char **str)
{
	int		i;

	if (!str || !*str)
		return ;
	i = -1;
	while ((*str)[++i])
		(*str)[i] = ft_tolower((*str)[i]);
}
