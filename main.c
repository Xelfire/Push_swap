/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:42:45 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:42:47 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		free_msg(&a, 0);
	if (second_pars(av, &a))
		free_msg(&a, 1);
	set_index(&a);
	if (is_sorted(a, NULL))
		free_msg(&a, 0);
	if (ft_lstsize(a) == 2)
		sort_2(&a);
	else if (ft_lstsize(a) == 3)
		sort_3(&a);
	else if (ft_lstsize(a) == 4)
		sort_4(&a, &b);
	else if (ft_lstsize(a) == 5)
		sort_5(&a, &b);
	else
		radix_sort(&a, &b);
	free_msg(&a, 0);
}
