/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 14:51:43 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/30 11:27:59 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	num_size(long nb)
{
	long	size;

	size = 1;
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		size = size * 10;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;
	long	size;

	n_long = n;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long = -1 * n_long;
	}
	size = num_size(n_long);
	while (size > 0)
	{
		ft_putchar_fd((n_long / size) + '0', fd);
		n_long = n_long - ((n_long / size) * size);
		size = size / 10;
	}
}
