/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:16:39 by fsacquin          #+#    #+#             */
/*   Updated: 2020/11/05 15:58:54 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final_lst;
	t_list	*new_elem;

	final_lst = NULL;
	while (lst != NULL)
	{
		if (!(new_elem = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&final_lst, del);
			break ;
		}
		ft_lstadd_back(&final_lst, new_elem);
		lst = lst->next;
	}
	return (final_lst);
}
