/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:08:52 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:07:11 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_u(t_flags *f, va_list args)
{
	int				count;
	unsigned int	n;
	int				size;
	int				z;
	int				sp;

	count = 0;
	n = va_arg(args, unsigned int);
	size = ft_getlen(n);
	f->min = f->width < 0 ? 1 : f->min;
	f->width = f->width < 0 ? f->width * -1 : f->width;
	f->zero = f->min ? 0 : f->zero;
	z = f->point - size > 0 ? f->point - size : 0;
	sp = f->width - (z + size) > 0 ? f->width - (z + size) : 0;
	if ((count = ft_first_case(f, n, sp, z)) >= 1)
		return (count);
	if (!ft_flags(f))
		return ((n < 0 ? ft_putchar_len('-') : 0) + ft_nbr_len(n));
	if (f->zero && f->point == -1)
		return (count + ft_print_no_point(n, sp));
	if (!f->point && n == 0)
		return (count + ft_nopoint(f));
	count += ft_filler_i_d(f, n, sp, z);
	return (count);
}
