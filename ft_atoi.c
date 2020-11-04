/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 15:22:39 by fsacquin          #+#    #+#             */
/*   Updated: 2020/11/04 18:45:09 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ignore_spaces(const char *str)
{
	int	j;

	j = 0;
	while (str[j] == ' ' || str[j] == '\f' || str[j] == '\n' || str[j] == '\r'
		|| str[j] == '\t' || str[j] == '\v')
	{
		j++;
	}
	return (j);
}

int			ft_atoi(const char *str)
{
	int	i;
	long	count_sign;
	long	int_final;

	count_sign = 1;
	i = ignore_spaces(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_sign = count_sign * (-1);
		i++;
	}
	int_final = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		int_final = int_final * 10 + (str[i] - '0');
		i++;
		if (int_final > 2147483647)
			break ;
	}
	if ((int_final == 2147483648 && count_sign == -1) || int_final <= 2147483648)
	{
		int_final = int_final * count_sign;
		return ((int)int_final);
	}
	return (count_sign == 1 ? -1 : 0);
}
