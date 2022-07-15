/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_num_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:09:07 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_set_num_arr(char **str_arr, int arr_len)
{
	int			*num_arr;
	int			i;
	long long	num;

	num_arr = (int *)malloc(sizeof(int) * arr_len);
	if (num_arr == NULL)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	i = 0;
	while (i < arr_len)
	{
		if (!ft_isdigit(str_arr[i]))
			ft_free_arr(num_arr, str_arr);
		num = ft_atoi(str_arr, i, num_arr);
		if (ft_check_double(num_arr, num, i))
			ft_free_arr(num_arr, str_arr);
		num_arr[i] = num;
		i++;
	}
	ft_free_str_arr(str_arr);
	return (num_arr);
}
