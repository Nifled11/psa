/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:36 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 12:03:25 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a, int index)
{
	t_stack	*temp;

	temp = *a;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = temp;
	*a = temp->next;
	temp->next = NULL;
	if (index == 0)
		ft_printf("ra\n");
}

void	ft_rb(t_stack **b, int index)
{
	t_stack	*temp;

	temp = *b;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (index == 0)
		ft_printf("rb\n");
}

void	ft_rr(t_stack **a, t_stack **b, int index)
{
	if (index == 1)
		ft_printf("rr\n");
	ft_ra(a, index);
	ft_rb(b, index);
}

void	ft_rra(t_stack **a, int index)
{
	t_stack	*temp;
	int		x;

	temp = *a;
	x = 0;
	while ((*a)->next)
	{
		*a = (*a)->next;
		x++;
	}
	(*a)->next = temp;
	while (x > 1)
	{
		temp = temp->next;
		x--;
	}
	temp->next = NULL;
	if (index == 0)
		ft_printf("rra\n");
}

void	ft_rrb(t_stack **b, int index)
{
	t_stack	*temp;
	int		x;

	temp = *b;
	x = 0;
	while ((*b)->next)
	{
		*b = (*b)->next;
		x++;
	}
	(*b)->next = temp;
	while (x > 1)
	{
		temp = temp->next;
		x--;
	}
	temp->next = NULL;
	if (index == 0)
		ft_printf("rrb\n");
}
