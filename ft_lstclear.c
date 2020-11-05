/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:02:55 by fsacquin          #+#    #+#             */
/*   Updated: 2020/11/05 15:50:52 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*lst2;

	if (lst && *lst)
	{
		lst2 = *lst;
		*lst = NULL;
		while (lst2 != NULL)
		{
			temp = lst2->next;
			(*del)(lst2->content);
			free(lst2);
			lst2 = temp;
		}
	}
}
