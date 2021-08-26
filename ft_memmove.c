/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:41:03 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/18 20:21:22 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (ptr1 <= ptr2)
	{
		while (length--)
			ptr2[length] = ptr1[length];
	}
	else
		ft_memcpy(dest, src, length);
	return (dest);
}
