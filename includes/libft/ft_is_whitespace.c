/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:43:49 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/22 11:04:17 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_whitespace(int c)
{
	if (c == '\n' || c == '\v' || c == '\f')
	{
		return (1);
	}
	if (c == ' ' || c == '\r' || c == '\t')
	{
		return (1);
	}
	return (0);
}
