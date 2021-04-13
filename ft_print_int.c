/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:07:20 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:06:43 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_i_d(t_flags *f, va_list args)
{
	int		count;
	long	n;
	int		size;
	int		z;
	int		space;

	count = 0;
	n = va_arg(args, int);
	size = ft_getlen(n);
	f->min = f->width < 0 ? 1 : f->min;
	f->width = f->width < 0 ? f->width * -1 : f->width;
	f->zero = f->min ? 0 : f->zero;
	z = f->point - size > 0 ? f->point - size : 0;
	space = f->width - (z + size) - (n < 0) > 0 ?
		f->width - (z + size) - (n < 0) : 0;
	if ((count = ft_first_case(f, n, space, z)) >= 1)
		return (count);
	if (!ft_flags(f))
		return ((n < 0 ? ft_putchar_len('-') : 0) + ft_nbr_len(n));
	if (f->zero && f->point == -1)
		return (count + ft_print_no_point(n, space));
	if (!f->point && n == 0)
		return (count + ft_nopoint(f));
	count += ft_filler_i_d(f, n, space, z);
	return (count);
}

int		ft_first_case(t_flags *f, long n, int sp, int size)
{
	int		count;

	count = 0;
	if (f->zero && f->width < 0)
	{
		count += ft_nbr_len(n);
		f->width += ft_getlen(n);
		while (f->width++)
			count += ft_putchar_len(' ');
		return (count);
	}
	if (f->width > size && f->width > 0 && !f->min && !f->zero
			&& f->point == -1)
	{
		while (sp--)
			count += ft_putchar_len(' ');
		if (n < 0)
			count += ft_putchar_len('-');
		return (count + ft_nbr_len(n));
	}
	return (0);
}

int		ft_filler_i_d(t_flags *f, long n, int sp, int z)
{
	int		count;

	count = 0;
	if (!f->min)
		while (sp--)
			count += ft_putchar_len(' ');
	if (n < 0)
		count += ft_putchar_len('-');
	while (z--)
		count += ft_putchar_len('0');
	count += ft_nbr_len(n);
	if (f->width < 0 && f->star)
		while (f->width++ < 0)
			count += ft_putchar_len(' ');
	if (f->min)
		while (sp--)
			count += ft_putchar_len(' ');
	return (count);
}

int		ft_nopoint(t_flags *f)
{
	int		count;

	count = 0;
	while (f->width--)
		count += ft_putchar_len(' ');
	return (count);
}

int		ft_print_no_point(long n, int s)
{
	int		count;

	count = 0;
	if (n < 0)
		count += ft_putchar_len('-');
	while (s--)
		count += ft_putchar_len('0');
	return (count + ft_nbr_len(n));
}
