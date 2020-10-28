/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 12:53:26 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/27 11:26:26 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		split_init(int *i, int *index, int *abs)
{
	*i = -1;
	*index = 0;
	*abs = 0;
}

static char		*append_section(int *abs, int *index, char **split, char *temp)
{
	temp[*abs] = '\0';
	split[*index] = ft_strdup(temp);
	temp[0] = '\0';
	*index = *index + 1;
	*abs = 0;
	return (temp);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		abs;
	int		index;
	char	**split;
	char	*temp;

	i = ft_strlen(s);
	if (!(split = malloc((i + 1) * sizeof(char))))
		return (NULL);
	if (!(temp = malloc((i + 1) * sizeof(char))))
		return (NULL);
	split_init(&i, &index, &abs);
	temp[0] = '\0';
	while (s[++i])
	{
		if (s[i] != c)
			temp[abs++] = s[i];
		if ((s[i] == c || s[i + 1] == '\0') && temp[0] != '\0')
		{
			temp = append_section(&abs, &index, split, temp);
		}
	}
	free(temp);
	split[index] = NULL;
	return (split);
}
