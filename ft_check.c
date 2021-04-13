/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:04:45 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:05:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
			|| c == 'x' || c == 'X' || c == 'n' || c == '%')
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_format(int c)
{
	if (c == '.' || c == '*' || c == '0' || c == '-' || c == '+')
		return (1);
	return (0);
}

int		ft_isflag(int c)
{
	if ((ft_istype(c) || ft_isdigit(c) || ft_format(c) || c == '%'))
		return (1);
	return (0);
}
