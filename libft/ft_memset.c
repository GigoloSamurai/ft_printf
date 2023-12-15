/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:44:24 by yasadki           #+#    #+#             */
/*   Updated: 2023/12/04 12:07:21 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	p;

	p = 0;
	while (p < len)
	{
		((unsigned char *) b)[p++] = c;
	}
	return (b);
}
/*int main()
{
	char str[] = "Salut les amis";
	int c = 'd';
	printf("%s\n", (unsigned char *) ft_memset(str, c, 5));
	return 0;
}*/
/*
p me sert a parcourir la memoire, je l'initialise a 0.
dans la boucle je convertit le pointeur void(generique) en pointeur unsigned 
char pour affiher le nbr d'octets
ensuite on attribue a c la valeur de l'octet pointe par p puis on incremente
puis on renvoie b, pointeur d'origine apres avoi rempli la memoire.
len dtermine la taille de la zone memoire que jsouhaite modif

*/
