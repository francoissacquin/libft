/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:15:33 by fsacquin          #+#    #+#             */
/*   Updated: 2020/05/14 18:26:53 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)str;
	while (str[i])
	{
		i++;
	}
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
