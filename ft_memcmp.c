/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 17:36:23 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/18 20:35:37 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t length)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (str1 == str2 || length == 0)
		return (0);
	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while (length--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		if (length)
		{
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}
