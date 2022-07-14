/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:15:17 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **stack)
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
	write(1, "rb\n", 3);
}
