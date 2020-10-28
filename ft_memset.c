/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:54:19 by fsacquin          #+#    #+#             */
/*   Updated: 2020/05/14 18:20:48 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t length)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)dest;
	while (length > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		length--;
	}
	return (dest);
}
