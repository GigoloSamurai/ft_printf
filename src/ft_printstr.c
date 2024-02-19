/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:18 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/19 19:38:15 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printstr(char *str)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
