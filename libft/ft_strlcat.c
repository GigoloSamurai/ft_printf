/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:26:41 by yasadki           #+#    #+#             */
/*   Updated: 2023/10/20 15:39:29 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	res;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size <= d)
		return (size + s);
	res = d;
	while (src[res - d] && res < size - 1)
	{
		dest[res] = src[res - d];
		res++;
	}
	dest[res] = '\0';
	return (d + s);
}
/*int	main()
{
	char dest[25] = "super ";
	const char src[] = "sayanlkyhiulvhj";
	
	size_t res = ft_strlcat(dest, src, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu", res);
}*/