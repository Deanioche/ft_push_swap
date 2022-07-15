/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:32:16 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_set_b(t_stack **stack_a, t_stack **stack_b, int chunk)
{
	t_list	*a_head;
	t_list	*a_top;
	int		i;

	i = 1;
	a_head = ((*stack_a)->head);
	while (a_head->next->next)
	{
		a_top = (a_head->next);
		if ((a_top->content) <= i)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else if ((a_top->content) <= (i + chunk))
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}	
		else
			ft_ra(stack_a);
	}
}

static int	ft_find_max(t_list *head, int max)
{
	t_list	*curr;
	int		i;

	curr = head;
	i = 0;
	while (curr->next->next)
	{
		curr = (curr->next);
		i++;
		if ((curr->content) == max)
			break ;
	}
	return (i);
}

static void	ft_max_to_top(t_stack **stack_a, t_stack **stack_b, int max)
{
	t_list	*b_head;
	int		i;
	int		middle;

	b_head = ((*stack_b)->head);
	while (b_head->next->next)
	{
		middle = (max / 2);
		i = ft_find_max(b_head, max);
		if (i <= middle)
			while ((i--) > 1)
				ft_rb(stack_b);
		else
			while ((i++) <= max)
				ft_rrb(stack_b);
		ft_pa(stack_a, stack_b);
		max--;
	}
}

static void	sort_short(t_stack **stack_a, t_stack **stack_b, int max)
{
	if (max == 2)
		ft_case_2(stack_a, 2);
	else if (max == 3)
		ft_case_3(stack_a);
	else if (max <= 5)
		ft_case_4_5(stack_a, stack_b, max);
	return ;
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b, int max)
{
	int		chunk;

	if (max >= 2 && max <= 5)
	{
		sort_short(stack_a, stack_b, max);
		return ;
	}
	chunk = 0.000000053 * max * max + 0.03 * max + 14.5;
	ft_set_b(stack_a, stack_b, chunk);
	ft_max_to_top(stack_a, stack_b, max);
}
