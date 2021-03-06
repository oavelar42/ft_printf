/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_deci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:06:35 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:06:28 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_hexa(t_flags *f, va_list args, int a)
{
	char	res[50];
	int		count;

	count = 0;
	ft_calcul_hexa(va_arg(args, unsigned int), a, res);
	f->min = f->width < 0 ? 1 : f->min;
	f->width = f->width < 0 ? f->width * -1 : f->width;
	if (res[0] == '\0')
		return (ft_putchar_len('0'));
	if (!ft_flags(f) && f->width == 0)
		count += ft_putstr_rev(res);
	else
	{
		if (f->point == 0 && res[0] == '0' && res[1] == '\0')
			while (f->width-- > 0)
				count += ft_putchar_len(' ');
		else if (f->width || f->point)
			count = ft_hexa_first_cases(f, res);
		else
			count = ft_putstr_rev(res);
	}
	return (count);
}

int		ft_hexa_first_cases(t_flags *f, char *nb)
{
	int		count;
	int		spaces;
	int		size;
	int		zeros;

	count = 0;
	size = ft_strlen(nb);
	f->zero = f->min ? 0 : f->zero;
	if (f->zero && f->point == -1)
		zeros = f->width - size > 0 ? f->width - size : 0;
	else
		zeros = f->point - size > 0 ? f->point - size : 0;
	spaces = f->width - (zeros + size);
	spaces = spaces > 0 ? spaces : 0;
	if (!f->min)
		while (spaces--)
			count += ft_putchar_len(' ');
	while (zeros--)
		count += ft_putchar_len('0');
	count += ft_putstr_rev(nb);
	if (f->min)
		while (spaces--)
			count += ft_putchar_len(' ');
	return (count);
}

void	ft_calcul_hexa(unsigned int nb, int a, char res[50])
{
	unsigned int		nbr;
	unsigned int		reste;
	int					j;

	j = 0;
	nbr = nb;
	if (nb == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return ;
	}
	while (nbr != 0)
	{
		reste = nbr % 16;
		if (reste < 10)
			res[j++] = 48 + reste;
		else
			res[j++] = 55 + reste;
		nbr = nbr / 16;
	}
	res[j] = '\0';
	if (!a)
		ft_tolower(res);
}
