/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:19:31 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/18 19:38:19 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char*)src;
	ptr2 = (char*)dest;
	if (!length || dest == src)
	{
		return (dest);
	}
	while (length > 0)
	{
		*ptr2 = *ptr1;
		ptr2++;
		ptr1++;
		length--;
	}
	return (dest);
}
