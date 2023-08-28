/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdussoye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:42:56 by tdussoye          #+#    #+#             */
/*   Updated: 2023/07/13 14:42:59 by tdussoye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct data
{
	int			dat;
	int			index;
	struct data	*next;	
}	t_list;

void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **a);
void	rotate_both(t_list **a, t_list **b);
void	revrotate_a(t_list **a);
void	revrotate_b(t_list **a);
void	revrotate_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sort_2(t_list **a);
void	sort_3(t_list **a);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);
int		is_sorted(t_list *a, t_list *b);
int		check_a(t_list *a);

//outras
int		second_pars(char **av, t_list **a);
void	free_msg(t_list **a, int i);
int		find_max_bits(t_list *a);
void	find_min(t_list *a, int *n);
void	find_max(t_list *a, int *n);
void	find_min_max(t_list *a, int *max, int *min);
void	set_index(t_list **a);
int		first_pars(char *str);

#endif
