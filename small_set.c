/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:50 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:43:51 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **a)
{
	if ((*a)->dat > (*a)->next->dat)
		swap_a(a);
}

void	sort_3(t_list **a)
{
	int	min;
	int	n[3];

	n[0] = (*a)->index;
	n[1] = (*a)->next->index;
	n[2] = (*a)->next->next->index;
	min = INT_MAX;
	find_min(*a, &min);
	if (n[0] == min || (n[2] == min && n[1] > n[0]))
		revrotate_a(a);
	if ((n[0] > n[1] && n[0] > n[2]))
		rotate_a(a);
	if (!is_sorted(*a, NULL))
		swap_a(a);
}

void	sort_4(t_list **a, t_list **b)
{
	int	min;
	int	max;

	min = INT_MAX;
	max = INT_MIN;
	find_min_max(*a, &min, &max);
	while ((*a)->index != min && (*a)->index != max)
		rotate_a(a);
	push_b(a, b);
	if (!check_a(*a))
		sort_3(a);
	push_a(a, b);
	if ((*a)->index == max)
		rotate_a(a);
}

void	sort_5(t_list **a, t_list **b)
{
	int	min;
	int	max;

	min = INT_MAX;
	max = INT_MIN;
	find_min_max(*a, &min, &max);
	while ((*a)->index != max && (*a)->index != min)
		rotate_a(a);
	push_b(a, b);
	while ((*a)->index != min && (*a)->index != max)
		rotate_a(a);
	push_b(a, b);
	if (!check_a(*a))
		sort_3(a);
	if ((*b)->index < (*b)->next->index)
		rotate_b(b);
	push_a(a, b);
	rotate_a(a);
	push_a(a, b);
}
