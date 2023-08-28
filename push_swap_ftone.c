/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ftone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:08 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:43:09 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = tmp;
	write(1, "pb\n", 3);
}

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	write(1, "pa\n", 3);
}

void	swap_a(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
	write(1, "ss\n", 3);
}
