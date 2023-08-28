/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:41:59 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:42:02 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_a(t_list *a)
{
	while (a->next)
	{
		if (a->dat > a->next->dat)
			return (0);
		a = a->next;
	}
	return (1);
}

int	is_sorted(t_list *a, t_list *b)
{
	if ((!a && !b) || (check_a(a) && !b))
		return (1);
	return (0);
}
