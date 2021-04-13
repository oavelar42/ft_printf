/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:08:13 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:06:52 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_pointer(t_flags *f, va_list args)
{
	int				count;
	char			n[50];
	int				sp;

	hexa_pointer(va_arg(args, unsigned long long), n, f->point);
	sp = f->width - ft_strlen(n) > 0 ? f->width - ft_strlen(n) : 0;
	count = 0;
	if (!(ft_flags(f)) && f->width == 0)
		return (ft_putstr_rev(n));
	if (!f->min)
		while (sp--)
			count += ft_putchar_len(' ');
	count += ft_putstr_rev(n);
	if (f->min)
		while (sp--)
			count += ft_putchar_len(' ');
	return (count);
}

void	hexa_pointer(unsigned long long n, char res[50], int d)
{
	unsigned long long	nbr;
	unsigned long long	aux;
	int					j;

	j = 0;
	nbr = n;
	if (nbr == 0)
		res[j++] = '0';
	while (nbr != 0)
	{
		aux = nbr % 16;
		if (aux < 10)
			res[j++] = 48 + aux;
		else
			res[j++] = 55 + aux;
		nbr = nbr / 16;
	}
	if (n == 0)
		d--;
	while (d-- > ft_getlen(n) - 1)
		res[j++] = '0';
	res[j++] = 'x';
	res[j++] = '0';
	res[j] = '\0';
	ft_tolower(res);
}
