/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:12:45 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:07:58 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_init_flags(t_flags *flags)
{
	flags->zero = 0;
	flags->min = 0;
	flags->point = -1;
	flags->star = 0;
	flags->width = 0;
	flags->type = 0;
	flags->plus = 0;
	return (1);
}

int		ft_flags(t_flags *f)
{
	return (f->point > -1 || f->star || f->min || f->zero);
}
