/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:46:42 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/23 16:59:14 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < length)
	{
		i++;
	}
	while (src[j] && i + j + 1 < length)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != length)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
