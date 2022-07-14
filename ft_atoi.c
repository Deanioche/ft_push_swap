/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:28:42 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

long long	ft_atoi(char **str_arr, int i, int *num_arr)
{
	long long		num;
	signed char		sign;
	char			*s;

	num = 0;
	sign = 1;
	s = (char *)str_arr[i];
	while (ft_isspace(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		num = num * 10 + *s++ - '0';
		if (num < -2147483648 || num > 2147483647)
			ft_free_arr(num_arr, str_arr);
	}
	return (num * sign);
}
