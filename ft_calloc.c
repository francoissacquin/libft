/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:01:37 by fsacquin          #+#    #+#             */
/*   Updated: 2020/11/01 10:13:59 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_units, size_t size_units)
{
	void			*ptr;

	if (num_units == 0 || size_units == 0)
	{
		num_units = 1;
		size_units = 1;
	}
	ptr = malloc(num_units * size_units);
	if (ptr)
		ft_bzero(ptr, num_units * size_units);
	return (ptr);
}
