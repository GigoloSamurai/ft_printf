/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:30:33 by yasadki           #+#    #+#             */
/*   Updated: 2023/10/19 18:21:01 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{			
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*int	main()
{
	char src[] = "supa saiyajin";
	char dest[14];
	size_t len = 8;
	ft_memmove(dest, src, len);
	printf("%s", dest);
}le if sert a dire : si dest est apres src dams la memory,
chevauchement possible.
L.17 18 : cast de src et dest en ptr de type char.
memmove = si dest est avant src,la copie se fait de l'avant vers l'arriere.
		  inversement si dest se trouve apres src.
en gros la fonction sert  a garantir une copie fiable des donnees 
meme si chevauchement de les deuxzones de memory
*/