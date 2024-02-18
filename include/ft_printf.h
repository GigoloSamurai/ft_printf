/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:53:48 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/18 18:33:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printhex(unsigned long n, char hex);
int		ft_printstr(char *str);
int		ft_printint(int n);
char	*ft_itoa_base(unsigned long n, char hex[16]);
int		ft_printptr(void *ptr);
int		ft_printpercent(void);
int		ft_printunsigned(unsigned int n);
char	*ft_decimal_itoa(unsigned int n);
#endif