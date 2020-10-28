/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:50:48 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/25 18:00:08 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		comb_len(const char *str1, const char *str2)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str1[i])
	{
		i++;
		len++;
	}
	i = 0;
	while (str2[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		i;
	int		j;
	int		len;
	char	*ptr;

	len = comb_len(str1, str2);
	if (!(ptr = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		ptr[i + j] = str2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
