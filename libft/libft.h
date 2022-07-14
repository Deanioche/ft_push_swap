/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:57:18 by dohyulee          #+#    #+#             */
/*   Updated: 2021/11/16 15:57:18 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

int				ft_isdigit(char *str);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstclear(t_list *lst);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strjoin(char *s1, char *s2);
int				ft_strlen(const char *s);
void			*ft_memset(void *s, int c, size_t n);
char			**ft_split(char const *s, char c);

#endif