/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:10:21 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:07:26 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_start(const char *str, va_list arg, t_flags *flags, int *count)
{
	int i;

	i = -1;
	str++;
	while ((str[++i] && ft_isflag(str[i])))
	{
		if (str[i] == '0' && flags->point == -1 && flags->width == 0)
			flags->zero = 1;
		if (str[i] == '*')
			i = i + ft_star_width(str, flags, i, arg);
		if (str[i] == '.')
			i = i + ft_point_width(str, flags, i, arg);
		if (ft_isdigit(str[i]) && flags->point == -1)
			flags->width = flags->width * 10 + str[i] - '0';
		if (str[i] == '-')
			flags->min = 1;
		if (str[i] == '+')
			flags->plus = 1;
		if (ft_istype(str[i]))
		{
			*count += ft_prepare(str + i++, flags, arg);
			break ;
		}
	}
	return (i);
}

int		ft_detect(const char *s, va_list arg, t_flags *flags, int c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		ft_init_flags(flags);
		if (s[i] == '%' && s[i + 1])
			i += ft_start((s + i), arg, flags, &c);
		else if (s[i] != '%')
			c += ft_putchar_len(s[i]);
	}
	return (c);
}

int		ft_printf(const char *format, ...)
{
	int			count;
	va_list		arg;
	t_flags		flags;

	count = 0;
	va_start(arg, format);
	count = ft_detect(format, arg, &flags, count);
	va_end(arg);
	return (count);
}
