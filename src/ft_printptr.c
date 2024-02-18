/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:07:30 by marvin            #+#    #+#             */
/*   Updated: 2024/02/18 18:07:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_printstr("0x0");
	else
	{
		len	= ft_printstr("0x");
		len += ft_printhex((unsigned long)ptr, 'x');
	}
	return (len);
}
