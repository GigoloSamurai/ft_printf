/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:17:28 by yasadki           #+#    #+#             */
/*   Updated: 2023/11/05 15:42:15 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*duplicate;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	duplicate = (char *)malloc(len + 1);
	if (duplicate != NULL)
	{
		while (i < len)
		{
			duplicate[i] = str[i];
			i++;
		}
		duplicate[len] = '\0';
	}
	return (duplicate);
}

/*int	main()
{
	const char *str = "super sayan";
	char *duplicate = ft_strdup(str);
	
	if (duplicate != NULL)
	{
		printf("str : %s\n", str);
		printf("duplicate : %s\n", duplicate);

		free(duplicate);
	}
	else
		printf("echec");
}*/