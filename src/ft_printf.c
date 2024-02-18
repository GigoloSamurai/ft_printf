/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:55:24 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/18 18:35:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_findformat(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		len += ft_printint(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_printptr(va_arg(args, void *));
	else if (format == 'x' || format == 'X')
		len += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == 'u')
		len += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	args;

	if (!s)
		return (0);
	va_start(args, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_findformat(args, s[i + 1]);
			i++;
		}
		else
			len += ft_printchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
