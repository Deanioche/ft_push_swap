/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:52:00 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_2(t_stack **stack, int max)
{
	t_list	*top;
	t_list	*bottom;

	top = (*stack)->head->next;
	bottom = (*stack)->tail->prev;
	if ((max == 2) && ((top->content) > (bottom->content)))
		ft_ra(stack);
	if ((max == 5) && ((top->content) < (bottom->content)))
		ft_rb(stack);
}

void	ft_sort_3(int min, int max, t_stack **stack_a)
{
	if (min == 1 && max == 2)
		ft_sa(stack_a);
	else if (min == 2 && max == 0)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (min == 2 && max == 1)
		ft_rra(stack_a);
	else if (min == 1 && max == 0)
		ft_ra(stack_a);
	else if (min == 0 && max == 1)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
}

void	ft_case_3(t_stack **stack_a)
{
	int		max;
	int		min;
	t_list	*list;
	int		i;

	i = 0;
	list = ((*stack_a)->head);
	while (list->next->next)
	{
		list = (list->next);
		if ((list->content) == 3)
			max = i;
		else if ((list->content) == 1)
			min = i;
		i++;
	}
	ft_sort_3(min, max, stack_a);
}

void	ft_case_4_5(t_stack **stack_a, t_stack **stack_b, int max)
{
	t_list	*list;
	int		size;

	size = max;
	while (size--)
	{
		list = ((*stack_a)->head->next);
		if ((list->content) < (max - 2))
			ft_pb(stack_a, stack_b);
		else
		{
			list->content -= (max - 3);
			ft_ra(stack_a);
		}
	}
	ft_case_3(stack_a);
	if (max == 5)
	{
		ft_case_2(stack_b, max);
		ft_pa(stack_a, stack_b);
	}
	ft_pa(stack_a, stack_b);
}
