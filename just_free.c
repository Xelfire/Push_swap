/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:42:10 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:42:12 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_a(t_list **a)
{
	t_list	*tmp;

	while (*a)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		free(tmp);
	}
}

void	free_msg(t_list **a, int i)
{
	if (i)
		write(2, "Error\n", 6);
	if (*a)
		free_a(a);
	exit(i);
}
