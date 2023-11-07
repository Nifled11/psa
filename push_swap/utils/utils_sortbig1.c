/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sortbig1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 12:04:00 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_target_b_to_a(t_stack *a, t_stack *b)
{
	long		match_value;
	t_stack		*now;
	t_stack		*target_stack;

	while (b)
	{
		match_value = LONG_MAX;
		now = a;
		while (now)
		{
			if ((now->nbr > b->nbr) && now->nbr < match_value)
			{
				match_value = now->nbr;
				target_stack = now;
			}
			now = now->next;
		}
		if (match_value == LONG_MAX)
			b->target = ft_min_stack(a);
		else
			b->target = target_stack;
		b = b->next;
	}
}

t_stack	*ft_return_cheapest(t_stack *x)
{
	t_stack	*cheapest;

	cheapest = NULL;
	while (x)
	{
		if (x->cheapest == true)
			cheapest = x;
		x = x->next;
	}
	return (cheapest);
}

void	ft_top_rotate(t_stack **a, t_stack **b, t_stack *cheap)
{
	if (cheap->upper_half == true)
	{
		while ((*a) != cheap && (*b) != cheap->target)
			ft_rr(a, b, 1);
	}
	else
	{
		while ((*a) != cheap && (*b) != cheap->target)
			ft_rrr(a, b, 1);
	}
	ft_indexandhalf(*a);
	ft_indexandhalf(*b);
}

void	ft_rotate_stack(t_stack **x, t_stack *cheap, char stack)
{
	if (stack == 'a')
	{
		while ((*x) != cheap)
		{
			if (cheap->upper_half == true)
				ft_ra(x, 0);
			else
				ft_rra(x, 0);
		}
	}
	else if (stack == 'b')
	{
		while ((*x) != cheap->target)
		{
			if (cheap->target->upper_half == true)
				ft_rb(x, 0);
			else
				ft_rrb(x, 0);
		}
	}
}

int	ft_checkposition(t_stack *a, t_stack *b)
{
	int	flag;

	flag = 0;
	if (a->nbr > b->nbr)
		return (flag);
	else
		return (flag + 1);
}
