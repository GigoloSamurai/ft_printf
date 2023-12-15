/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:10:16 by yasadki           #+#    #+#             */
/*   Updated: 2023/10/24 14:53:24 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*i;

	i = NULL;
	while (*str)
	{
		if (*str == (char) c)
			i = (char *) str;
		str++;
	}
	if (*str == (char) c)
		i = (char *) str;
	return (i);
}
/*int	main()
{
	char str[] = "super sayan";
	int	c = 'p';
	printf("%s", ft_strrchr(str, c));
}*/