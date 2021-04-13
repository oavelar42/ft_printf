/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:09:46 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:07:03 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar_len(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_putstr_len(char *str)
{
	int			i;

	i = -1;
	while (str[++i])
		ft_putchar_len(str[i]);
	return (ft_strlen(str));
}

int		ft_putstr_rev(char *str)
{
	int			i;

	i = ft_strlen(str);
	while (i-- > 0)
		ft_putchar_len(str[i]);
	return (ft_strlen(str));
}

long	ft_nbr_len(long n)
{
	long int	aux;
	long		res;

	aux = n;
	res = ft_getlen(n);
	if (aux < 0)
	{
		aux = -aux;
	}
	if (aux > 9)
	{
		ft_nbr_len(aux / 10);
		ft_nbr_len(aux % 10);
	}
	else
		ft_putchar_len(aux + '0');
	return (res);
}
