/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 16:55:01 by fsacquin          #+#    #+#             */
/*   Updated: 2020/05/14 18:19:28 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t length)
{
	unsigned char	*ptr1;
	size_t			i;

	ptr1 = (unsigned char *)str;
	i = 0;
	while (length > i)
	{
		if (ptr1[i] == (unsigned char)c)
		{
			return (ptr1 + i);
		}
		i++;
	}
	return (0);
}
