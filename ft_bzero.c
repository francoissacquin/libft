/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:20:53 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/31 13:26:13 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	unsigned char	*destroy;

	destroy = (unsigned char*)s;
	while (length > 0)
	{
		*destroy = 0;
		length--;
		destroy++;
	}
}
