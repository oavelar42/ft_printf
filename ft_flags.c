/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:11:40 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:06:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_prepare(const char *str, t_flags *f, va_list args)
{
	int		count;

	f->type = *str;
	count = 0;
	if (*str == 's')
		count += ft_print_str(f, args);
	if (*str == 'c')
		count += ft_print_char(f, args);
	if (*str == 'i' || *str == 'd')
		count += ft_print_i_d(f, args);
	if (*str == 'u')
		count += ft_print_u(f, args);
	if (*str == 'x')
		count += ft_print_hexa(f, args, 0);
	if (*str == 'X')
		count += ft_print_hexa(f, args, 1);
	if (*str == 'p')
		count += ft_print_pointer(f, args);
	if (*str == 'n')
		count *= va_arg(args, int);
	if (*str == '%')
		count += ft_print_perce(f);
	return (count);
}

int		ft_point_width(const char *str, t_flags *f, int i, va_list arg)
{
	int		c;

	i++;
	c = 0;
	f->point = 0;
	if (str[i] == '*')
		f->point = va_arg(arg, int);
	else
		while (ft_isdigit(str[i]))
		{
			f->point = f->point * 10 + str[i++] - '0';
			c = 1;
		}
	if (f->point < 0)
		f->point = -1;
	return (1);
}

int		ft_star_width(const char *str, t_flags *f, int i, va_list args)
{
	int		n;

	if (str[i] == '*' && f->zero && f->width == 0 && f->point == -1)
	{
		f->width = va_arg(args, int);
		f->star = 1;
	}
	else if (str[i] == '*' && f->width == 0 && f->point == -1)
	{
		n = va_arg(args, int);
		if (n < 0 && (n = -n))
			f->min = 1;
		f->width = n;
		f->star = 1;
	}
	if (str[i] == '*' && f->point == 0 && f->width != 0)
	{
		n = va_arg(args, int);
		if (n < 0 && (n = -n))
			f->min = 1;
		f->point = n;
		f->star = 1;
	}
	return (1);
}
