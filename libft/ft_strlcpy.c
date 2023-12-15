/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:24:53 by yasadki           #+#    #+#             */
/*   Updated: 2023/10/26 12:06:31 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < len)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int	main()
{
	char src[] = "super sayan";
	char dest[5];
	
	size_t	i = ft_strlcpy(dest, src, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu\n", i);	
}*/