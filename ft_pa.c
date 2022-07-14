/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:39:35 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_list	*a_head;
	t_list	*b_head;
	t_list	*a_top;
	t_list	*b_top;
	t_list	*b_next_top;

	a_head = (*stack_a)->head;
	b_head = (*stack_b)->head;
	if (!(b_head->next->next))
		return ;
	a_top = (a_head->next);
	b_top = (b_head->next);
	b_next_top = (b_top->next);
	(b_head->next) = b_next_top;
	(b_next_top->prev) = b_head;
	(a_head->next) = b_top;
	(b_top->prev) = a_head;
	(b_top->next) = a_top;
	(a_top->prev) = b_top;
	write(1, "pa\n", 3);
}
