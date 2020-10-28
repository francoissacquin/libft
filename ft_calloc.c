/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:01:37 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/27 12:25:32 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int num_units, unsigned int size_units)
{
	void			*ptr;
	size_t			i;

	i = 0;
	if (!(ptr = malloc(num_units * size_units)))
		return (NULL);
	while (i <= num_units * size_units)
	{
		((char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
