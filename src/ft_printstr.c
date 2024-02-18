/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:07:07 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/18 17:42:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printstr(char *str)
{
	if (!str)
		str = "NULL";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
