/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 17:47:41 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/27 11:59:57 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n2)
{
	int		len;

	len = 1;
	while ((n2 / 10) > 0)
	{
		len = len * 10;
		n2 = n2 / 10;
	}
	return (len);
}

static void	edge_case(int *n, int *edge)
{
	if (*n == -2147483648)
	{
		*edge = 1;
		*n = *n + 1;
	}
	else
		*edge = 0;
}

static void	nb_is_neg(int *n, int *i, char *ptr)
{
	if (*n < 0)
	{
		ptr[0] = '-';
		*n = *n * -1;
		*i = 1;
	}
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	int		i;
	int		edge;

	i = 0;
	edge_case(&n, &edge);
	if (!(ptr = (char*)malloc(sizeof(char) * 12)))
		return (0);
	nb_is_neg(&n, &i, ptr);
	size = num_len(n);
	while (size > 0)
	{
		ptr[i++] = '0' + (n / size);
		n = n - ((n / size) * size);
		size = size / 10;
	}
	if (edge == 1)
		ptr[i - 1] = '8';
	ptr[i] = '\0';
	return (ptr);
}
