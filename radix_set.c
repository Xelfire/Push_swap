/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:41 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:43:42 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int		max_bits;
	int		i;
	int		size;
	t_list	*tmp;

	max_bits = find_max_bits(*a);
	i = -1;
	while (++i < max_bits)
	{
		size = ft_lstsize(*a);
		while (size--)
		{
			tmp = *a;
			if ((tmp->index >> i & 1))
				rotate_a(a);
			else
				push_b(a, b);
		}
		while (*b)
			push_a(a, b);
	}
}

void	set_index(t_list **a)
{
	int		i;
	t_list	*tmp;
	int		max;

	max = INT_MIN;
	i = ft_lstsize(*a) + 1;
	while (--i > 0)
	{
		tmp = *a;
		max = INT_MIN;
		while (tmp)
		{
			if (tmp->dat > max && tmp->index == 0)
				max = tmp->dat;
			tmp = tmp->next;
		}
		tmp = *a;
		while (tmp->dat != max)
			tmp = tmp->next;
		tmp->index = i;
	}
}
