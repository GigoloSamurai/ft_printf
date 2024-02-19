/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:58:53 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/19 18:58:53 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printint(int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}

int	ft_printunsigned(unsigned int n)
{
	int		len;
	char	*tab;

	len = 0;
	tab = ft_decimal_itoa(n);
	len = ft_printstr(tab);
	free(tab);
	return (len);
}
