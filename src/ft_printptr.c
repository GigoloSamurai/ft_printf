/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:06:46 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/19 20:41:44 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_printstr("(nil)");
	else
	{
		len = ft_printstr("0x");
		len += ft_printhex((unsigned long)ptr, 'x');
	}
	return (len);
}
