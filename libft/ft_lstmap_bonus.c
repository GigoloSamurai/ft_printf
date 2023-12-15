/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:21:43 by yasadki           #+#    #+#             */
/*   Updated: 2023/12/04 11:47:52 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*anew_lst;

	anew_lst = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew((*f)(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&anew_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&anew_lst, new_lst);
		lst = lst->next;
	}
	return (anew_lst);
}
/*l23.ca cree un new element et ca y applique *f
le code en gros ca cree une lst contenant la premiere lst -
mais avec *f d'appliquer */
