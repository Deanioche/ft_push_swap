/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:24:18 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_cntword(const char *s, char c)
{
	size_t			cnt;
	unsigned char	flag;
	char			**mem;

	cnt = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag == 1)
		{
			cnt++;
			flag = 0;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	mem = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!mem)
		return (NULL);
	ft_memset(mem, '0', sizeof(char *) * (cnt + 1));
	mem[cnt] = NULL;
	return (mem);
}

size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strndup(const char *s, size_t len)
{
	char	*mem;

	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s, len + 1);
	return (mem);
}

char	**ft_freeall(char **mem)
{
	char	**cpy_mem;

	cpy_mem = mem;
	while (*cpy_mem)
		free(cpy_mem++);
	free(mem);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	char	**cpy_mem;
	size_t	len_word;

	mem = ft_cntword(s, c);
	if (!mem)
		return (NULL);
	cpy_mem = mem;
	while (*cpy_mem)
	{
		while (*s && *s == c)
			s++;
		len_word = ft_wordlen(s, c);
		*cpy_mem = ft_strndup(s, len_word);
		if (!*cpy_mem)
			return (ft_freeall(mem));
		s += len_word;
		cpy_mem++;
	}
	return (mem);
}
