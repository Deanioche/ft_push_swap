/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:31:14 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <unistd.h>

typedef struct s_stack
{
	t_list	*head;
	t_list	*tail;
}	t_stack;

void		ft_push_swap(char **str_arr, int arr_len);
char		**ft_set_str_arr(int ac, char **av);
int			*ft_set_num_arr(char **str_arr, int arr_len);
void		ft_simplify(int *num_arr, int arr_len);
void		ft_sort(t_stack **stack_a, t_stack **stack_b, int max);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_ra(t_stack **stack);
void		ft_rb(t_stack **stack);
void		ft_rra(t_stack **stack);
void		ft_rrb(t_stack **stack);
void		ft_sa(t_stack **stack);
void		ft_case_2(t_stack **stack_a, int max);
void		ft_case_3(t_stack **stack_a);
void		ft_case_4_5(t_stack **stack_a, t_stack **stack_b, int max);
long long	ft_atoi(char **str_arr, int i, int *num_arr);
int			ft_check_double(int *arr, int num, int pos);
void		ft_free_str_arr(char **str_arr);
void		ft_free_arr(int *num_arr, char **str_arr);
#endif
