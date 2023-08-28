/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_fttwo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:19 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:43:22 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	(*a) = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rotate_both(t_list **a, t_list **b)
{
	rotate_a(a);
	rotate_b(b);
	write(1, "rr\n", 3);
}

void	revrotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(a, tmp);
	tmp2->next = NULL;
	write(1, "rra\n", 4);
}

void	revrotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(b, tmp);
	tmp2->next = NULL;
	write(1, "rrb\n", 4);
}
