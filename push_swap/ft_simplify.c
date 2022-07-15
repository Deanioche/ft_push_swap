/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:07:32 by dohyulee          #+#    #+#             */
/*   Updated: 2022/06/14 15:50:51 by dohyulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_swap(int *n1, int *n2)
{
	int	temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

static	void	ft_quick_sort(int *num_arr, int left, int right)
{
	int	pivot;
	int	start;
	int	end;

	start = left;
	end = right;
	pivot = num_arr[((start + end) / 2)];
	while (start <= end)
	{
		while (pivot > num_arr[start])
			start++;
		while (pivot < num_arr[end])
			end--;
		if (start <= end)
		{
			ft_swap(&num_arr[start], &num_arr[end]);
			start++;
			end--;
		}
	}
	if (start < right)
		ft_quick_sort(num_arr, start, right);
	if (left < end)
		ft_quick_sort(num_arr, left, end);
}

void	ft_simplify(int *num_arr, int arr_len)
{
	int	*sorted_arr;
	int	i;
	int	j;
	int	k;

	sorted_arr = (int *)malloc(sizeof(int) * arr_len);
	i = 0;
	while (i < arr_len)
	{
		sorted_arr[i] = num_arr[i];
		i++;
	}
	ft_quick_sort(sorted_arr, 0, (arr_len - 1));
	j = 0;
	while (j < arr_len)
	{
		k = 0;
		while ((num_arr[j] != sorted_arr[k]) && (k < arr_len))
			k++;
		num_arr[j] = k + 1;
		j++;
	}
	free(sorted_arr);
	sorted_arr = NULL;
}
