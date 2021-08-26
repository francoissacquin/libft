/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:50:48 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/30 15:57:06 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comb_len(const char *str1, const char *str2)
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

static void	init_variables(int *i, int *j)
{
	*i = -1;
	*j = -1;
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		i;
	int		j;
	int		len;
	char	*ptr;

	if (!str1)
		return ((char *)str2);
	if (!str2)
		return ((char *)str1);
	len = comb_len(str1, str2);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	init_variables(&i, &j);
	while (str1[++i])
		ptr[i] = str1[i];
	while (str2[++j])
		ptr[i + j] = str2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
