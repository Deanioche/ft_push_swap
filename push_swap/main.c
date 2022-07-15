/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:08:57 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/14 15:12:47 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char		**str_arr;
	int			arr_len;

	if (ac == 1)
		return (0);
	str_arr = ft_set_str_arr(ac, av);
	arr_len = 0;
	while (str_arr[arr_len])
		arr_len++;
	ft_push_swap(str_arr, arr_len);
	return (0);
}
