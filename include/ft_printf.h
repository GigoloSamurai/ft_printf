/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:04:13 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/19 19:37:57 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
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