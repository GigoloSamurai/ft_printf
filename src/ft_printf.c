/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:55:24 by yasadki           #+#    #+#             */
/*   Updated: 2023/12/16 00:12:38 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_findformat(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 's')
		len += ft_printstr(va_arg(args, char *));
}