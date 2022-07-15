/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_str_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:51:30 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_set_str_arr(int ac, char **av)
{
	int		i;
	char	*str;
	char	**str_arr;

	i = 0;
	str = NULL;
	while (i < ac)
	{
		str = ft_strjoin(str, av[i + 1]);
		i++;
	}
	str_arr = ft_split(str, ' ');
	free(str);
	str = NULL;
	return (str_arr);
}
