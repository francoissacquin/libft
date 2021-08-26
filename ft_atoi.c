/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 15:22:39 by fsacquin          #+#    #+#             */
/*   Updated: 2020/11/05 13:08:34 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ignore_spaces(const char *str)
{
	int		j;

	j = 0;
	while (str[j] == ' ' || str[j] == '\f' || str[j] == '\n' || str[j] == '\r'
		|| str[j] == '\t' || str[j] == '\v')
	{
		j++;
	}
	return (j);
}

static long	analyze_sign(const char *str, int *i)
{
	if (str[*i] == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	*i = *i + 1;
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	count_sign;
	long	int_final;

	count_sign = 1;
	i = ignore_spaces(str);
	if (str[i] == '-' || str[i] == '+')
		count_sign = analyze_sign(str, &i);
	int_final = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		int_final = int_final * 10 + (str[i] - '0');
		i++;
		if (int_final > 2147483647)
			break ;
	}
	int_final = int_final * count_sign;
	if (int_final >= -2147483648 && int_final <= 2147483647)
		return ((int)int_final);
	if (count_sign == 1)
		return (-1);
	else
		return (0);
}
