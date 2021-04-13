/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:10:59 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:07:45 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

typedef struct	s_flags
{
	int		zero;
	int		min;
	int		width;
	int		star;
	int		point;
	int		type;
	int		plus;
}				t_flags;

int				ft_start(const char *str, va_list a, t_flags *f, int *count);
int				ft_detect(const char *s, va_list arg, t_flags *flags, int c);
int				ft_printf(const char *format, ...);

int				ft_prepare(const char *str, t_flags *f, va_list args);
int				ft_point_width(const char *str, t_flags *f, int i, va_list arg);
int				ft_star_width(const char *str, t_flags *f, int i, va_list args);

int				ft_print_i_d(t_flags *f, va_list args);
int				ft_first_case(t_flags *f, long n, int sp, int size);
int				ft_filler_i_d(t_flags *f, long n, int sp, int z);
int				ft_nopoint(t_flags *f);
int				ft_print_no_point(long n, int s);

int				ft_print_u(t_flags *f, va_list args);

void			ft_calcul_hexa(unsigned int nb, int a, char res[50]);
int				ft_hexa_first_cases(t_flags *f, char *nb);
int				ft_print_hexa(t_flags *f, va_list args, int a);

int				ft_print_char(t_flags *f, va_list args);
int				ft_print_str(t_flags *f, va_list args);
int				ft_print_perce(t_flags *f);
int				ft_spaces(t_flags *f, char *res, int space);
char			*ft_precision(t_flags *f, char *res, int len);

int				ft_print_pointer(t_flags *f, va_list args);
void			hexa_pointer(unsigned long long n, char res[50], int d);

int				ft_istype(char c);
int				ft_isflag(int c);
int				ft_isdigit(int c);
int				ft_format(int c);

int				ft_putchar_len(char c);
int				ft_putstr_len(char *str);
int				ft_putstr_rev(char *str);
long			ft_nbr_len(long n);

int				ft_init_flags(t_flags *flags);
int				ft_flags(t_flags *f);

int				ft_getlen(long nb);
int				ft_strlen(const char *str);
void			ft_tolower(char *str);
char			*ft_strdup(char *str);
char			*ft_strcpy(char *dst, char *src);

#endif
