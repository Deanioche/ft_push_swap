/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 07:39:30 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	len_total;
	char			*mem;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_total = len_s2 + len_s1 + 2;
	mem = (char *)malloc(len_total);
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s1, len_s1 + 1);
	ft_strlcat(mem, s2, (len_total - 1));
	ft_strlcat(mem, " ", len_total);
	if (s1 != NULL)
	{
		free(s1);
		s1 = NULL;
	}
	return (mem);
}
