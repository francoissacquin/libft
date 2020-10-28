/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 17:05:37 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/29 00:01:34 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != (char)c && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '\0' && str[i] != (char)c)
	{
		return (NULL);
	}
	else if (str[i] == (char)c)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
