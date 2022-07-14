/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:08:40 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:08:42 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack)
{
	t_list	*head;
	t_list	*tail;
	t_list	*top;
	t_list	*next_top;
	t_list	*bottom;

	head = ((*stack)->head);
	if (!(head->next->next))
		return ;
	tail = ((*stack)->tail);
	top = (head->next);
	next_top = (top->next);
	bottom = (tail->prev);
	if (top == bottom)
		return ;
	(top->next) = tail;
	(top->prev) = bottom;
	(bottom->next) = top;
	(tail->prev) = top;
	(head->next) = next_top;
	(next_top->prev) = head;
	write(1, "ra\n", 3);
}
