/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:15:33 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/30 11:39:26 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (str[i])
	{
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	i--;
	ptr = ptr + i;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (ptr);
		}
		ptr--;
		i--;
	}
	return (0);
}
