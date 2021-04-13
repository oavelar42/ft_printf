/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:05:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:06:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_char(t_flags *f, va_list args)
{
	int		i;

	i = 0;
	if (f->width && f->min)
	{
		i += ft_putchar_len(va_arg(args, int));
		while (i < f->width)
			i += ft_putchar_len(' ');
		return (i);
	}
	while (i < f->width - 1)
		i += ft_putchar_len(' ');
	i += ft_putchar_len(va_arg(args, int));
	return (i);
}

int		ft_print_str(t_flags *f, va_list args)
{
	int		len;
	int		spa;
	int		count;
	char	*res;

	count = 0;
	res = va_arg(args, char *);
	if (f->point == 0)
		return (ft_spaces(f, "", f->width));
	res = !res ? ft_strdup("(null)") : ft_strdup(res);
	len = ft_strlen(res);
	if (f->point >= 0)
		res = ft_precision(f, res, len);
	spa = f->width - ft_strlen(res);
	if (spa >= 0)
		count += ft_spaces(f, res, spa);
	if (!f->width || f->width < ft_strlen(res))
		count += ft_putstr_len(res);
	free(res);
	return (count);
}

int		ft_print_perce(t_flags *f)
{
	int		i;

	i = 1;
	if (f->min)
	{
		ft_putchar_len('%');
		while (i < f->width)
			i += ft_putchar_len(' ');
		return (i);
	}
	if (f->zero)
	{
		while (i < f->width)
			i += ft_putchar_len('0');
	}
	while (i < f->width)
		i += ft_putchar_len(' ');
	ft_putchar_len('%');
	return (i);
}

int		ft_spaces(t_flags *f, char *res, int space)
{
	int		i;

	i = 0;
	if (!f->min)
		while (i < space)
			i += ft_putchar_len(' ');
	i += ft_putstr_len(res);
	if (f->min)
		while (i < space + ft_strlen(res))
			i += ft_putchar_len(' ');
	return (i);
}

char	*ft_precision(t_flags *f, char *res, int len)
{
	int		i;

	i = 0;
	while (i < f->point && i < len)
		i++;
	res[i] = '\0';
	return (res);
}
