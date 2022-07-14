/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:13:54 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/08 20:21:02 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_stack	*ft_set_stack(void)
{
	t_stack	*stack;
	t_list	*head;
	t_list	*tail;

	stack = (t_stack *)malloc(sizeof(t_stack));
	head = ft_lstnew(0);
	tail = ft_lstnew(0);
	(head->next) = tail;
	(stack->head) = head;
	(stack->tail) = tail;
	return (stack);
}

static t_stack	*ft_set_stack_a(int *num_arr, int arr_len)
{
	t_stack	*stack_a;
	t_list	*new;
	int		i;

	i = 0;
	stack_a = ft_set_stack();
	while (i < arr_len)
	{
		new = ft_lstnew(num_arr[i]);
		ft_lstadd_back(&(stack_a->head), new);
		i++;
	}
	free(num_arr);
	num_arr = NULL;
	return (stack_a);
}

static void	ft_free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	ft_lstclear((*stack_a)->head);
	free(*stack_a);
	stack_a = NULL;
	ft_lstclear((*stack_b)->head);
	free(*stack_b);
	stack_b = NULL;
	return ;
}

static void	check_sorted(int *num_arr, int arr_len)
{
	int	tmp;
	int	i;

	tmp = 1;
	i = 0;
	while (i < arr_len)
	{
		if (tmp++ != num_arr[i++])
			return ;
	}
	free(num_arr);
	exit(1);
}

void	ft_push_swap(char **str_arr, int arr_len)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			*num_arr;

	num_arr = ft_set_num_arr(str_arr, arr_len);
	ft_simplify(num_arr, arr_len);
	check_sorted(num_arr, arr_len);
	stack_a = ft_set_stack_a(num_arr, arr_len);
	stack_b = ft_set_stack();
	ft_sort(&stack_a, &stack_b, arr_len);
	ft_free_stacks(&stack_a, &stack_b);
	return ;
}
