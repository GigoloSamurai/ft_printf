/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:38:48 by yasadki           #+#    #+#             */
/*   Updated: 2023/10/19 18:01:13 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned int	p;

	p = 0;
	if (!dest && !src)
		return (NULL);
	while (p < len)
	{
		((unsigned char *)dest)[p] = ((unsigned char *)src)[p];
		p++;
	}
	return (dest);
}
/*int	main(void)
{
	char dest[] = "yo";
	char src[] = "les amis";
	printf("%s", (unsigned char *) ft_memcpy(dest, src, 3));
}*/