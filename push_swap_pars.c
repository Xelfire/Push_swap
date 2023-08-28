/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:31 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:43:34 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_list *a, int n)
{
	while (a)
	{
		if (a->dat == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	first_pars(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (1);
			j++;
		}
		if ((str[i] < '0' || str[i] > '9') && (str[i] != '-' && str[i] != '+'))
			return (1);
		if (j > 1)
			return (1);
	}
	return (0);
}

long	ft_atoi(char *str)
{
	long long	n;
	int			sig;
	int			i;

	n = 0;
	sig = 1;
	i = 0;
	if (first_pars(str))
		return (2147483648);
	if (str[i] == '-' || str[i] == '+')
	{
		sig = (str[i] != '-') - (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + sig * (str[i++] - '0');
		if (n > INT_MAX || n < INT_MIN)
			return (2147483648);
	}
	return (n);
}

t_list	*create_cell(long n)
{
	t_list	*data;

	data = malloc(sizeof(t_list));
	if (!data)
		return (NULL);
	data->dat = n;
	data->index = 0;
	data->next = NULL;
	return (data);
}

int	second_pars(char **av, t_list **a)
{
	int		i;
	long	n;

	n = 0;
	i = 0;
	while (av[++i])
	{
		n = ft_atoi(av[i]);
		if (n > INT_MAX)
			free_msg(a, 1);
		if (check_double(*a, n) == 1)
			free_msg(a, 1);
		ft_lstadd_back(a, create_cell(n));
	}
	return (0);
}
