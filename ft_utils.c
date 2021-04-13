/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:13:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/03/28 14:08:09 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_getlen(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0 && len == 0)
		nb = nb * (-1);
	while (nb >= 1 && len++ >= 0)
		nb /= 10;
	return (len);
}

int		ft_strlen(const char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_tolower(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
}

char	*ft_strdup(char *src)
{
	char	*str;
	long	i;

	if (!src)
		return (NULL);
	if (!(str = malloc(sizeof(char ) * (ft_strlen(src) + 1))))
		return (NULL);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}

char	*ft_strcpy(char *dst, char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (dst);
}
