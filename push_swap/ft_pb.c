/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:33:51 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_list	*b_head;
	t_list	*a_head;
	t_list	*a_top;
	t_list	*b_top;
	t_list	*a_next_top;

	a_head = (*stack_a)->head;
	if (!(a_head->next->next))
		return ;
	b_head = (*stack_b)->head;
	a_top = (a_head->next);
	b_top = (b_head->next);
	a_next_top = (a_top->next);
	(a_head->next) = a_next_top;
	(a_next_top->prev) = a_head;
	(b_head->next) = a_top;
	(a_top->prev) = b_head;
	(a_top->next) = b_top;
	(b_top->prev) = a_top;
	write(1, "pb\n", 3);
}
