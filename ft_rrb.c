/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:09:30 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_stack **stack)
{
	t_list	*head;
	t_list	*tail;
	t_list	*top;
	t_list	*bottom;
	t_list	*prev_bottom;

	head = ((*stack)->head);
	if (!(head->next->next))
		return ;
	tail = ((*stack)->tail);
	top = (head->next);
	bottom = (tail->prev);
	prev_bottom = (bottom->prev);
	if (top == bottom)
		return ;
	(bottom->next) = top;
	(top->prev) = bottom;
	(head->next) = bottom;
	(bottom->prev) = head;
	(prev_bottom->next) = tail;
	(tail->prev) = prev_bottom;
	write(1, "rrb\n", 4);
}
