/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:33:55 by marvin            #+#    #+#             */
/*   Updated: 2024/01/27 20:33:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_itoa_base(unsigned long n, char hex[16])
{
	int		i;
	char	*tab;
	char	*result;

	tab = ft_calloc(17, sizeof(char));
	if (!tab)
		return (NULL);
	i = 16;
	while (n)
	{
		tab[--i] = hex[n % 16];
		n /= 16;
	}
	result = ft_strdup(tab + i);
	free(tab);
	return (result);
}
