/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:36 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 12:03:20 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_sa(t_stack *a, int index)
{
	t_stack	*temp;
	int		x;

	temp = a;
	temp = temp->next;
	x = a->nbr;
	a->nbr = temp->nbr;
	temp->nbr = x;
	if (index == 0)
		ft_printf("sa\n");
}

void	ft_sb(t_stack *b, int index)
{
	t_stack	*temp;
	int		x;

	temp = b;
	temp = temp->next;
	x = b->nbr;
	b->nbr = temp->nbr;
	temp->nbr = x;
	if (index == 0)
		ft_printf("sb\n");
}

void	ft_ss(t_stack *a, t_stack *b, int index)
{
	if (index == 1)
		ft_printf("ss\n");
	ft_sa(a, index);
	ft_sb(b, index);
}

void	ft_pa(t_stack **a, t_stack **b, int index)
{
	t_stack	*temp;

	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;
	if (index == 0)
		ft_printf("pa\n");
}

void	ft_pb(t_stack **b, t_stack **a, int index)
{
	t_stack	*temp;

	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	if (index == 0)
		ft_printf("pb\n");
}
