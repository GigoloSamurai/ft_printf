/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:43:21 by marvin            #+#    #+#             */
/*   Updated: 2024/01/23 21:43:21 by marvin           ###   ########.fr       */
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
