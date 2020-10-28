/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:20:53 by fsacquin          #+#    #+#             */
/*   Updated: 2020/05/14 18:16:06 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	unsigned char	*destroy;

	destroy = (unsigned char*)s;
	while (length > 0)
	{
		*destroy = (unsigned char)'\0';
		length--;
		destroy++;
	}
}
