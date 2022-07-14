/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:24:22 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strnlen(dest, size);
	if (len == size)
		return (len + (size_t)ft_strlen((char *)src));
	return (len + ft_strlcpy(dest + len, src, size - len));
}
