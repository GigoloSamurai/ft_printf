/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:03:41 by yasadki           #+#    #+#             */
/*   Updated: 2023/12/04 11:19:29 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s1 = ft_strlen((char *)s1);
	while (size_s1 > 0 && ft_strchr(set, s1[size_s1 - 1]))
		size_s1--;
	return (ft_substr((char *)s1, 0, size_s1));
}
// on avance le pointeur s1 au début de la str sans les carac présents dans set
// apres on btient la taille de la substr pas calculee par set
// Réduit size_s1 en éliminant les caractères de set à la fin de la sous-chaîne