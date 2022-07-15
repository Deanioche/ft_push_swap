/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:27:04 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack)
{
	t_list	*head;
	t_list	*top;
	t_list	*next_top;

	head = ((*stack)->head);
	top = (head->next);
	next_top = (top->next);
	(top->next) = (next_top->next);
	(top->prev) = next_top;
	(next_top->next->prev) = top;
	(head->next) = next_top;
	(next_top->next) = top;
	(next_top->prev) = head;
	write(1, "sa\n", 3);
}
