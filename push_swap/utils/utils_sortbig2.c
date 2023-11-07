/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sortbig2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:46:21 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallestop(t_stack *a)
{
	t_stack	*x;
	int		small;

	x = a;
	small = a->nbr;
	while (x)
	{
		if (x->nbr < small)
			return (1);
		x = x->next;
	}
	return (0);
}

void	ft_indexandhalf(t_stack *x)
{
	int	half;
	int	i;

	half = ft_countargstack(x) / 2;
	i = 0;
	if (!x)
		ft_error_management(7);
	while (x)
	{
		x->index = i;
		if (i <= half)
			x->upper_half = true;
		else
			x->upper_half = false;
		x = x->next;
		++i;
	}
}

void	ft_set_target_a_to_b(t_stack *a, t_stack *b)
{
	long		match_value;
	t_stack		*now;
	t_stack		*target_stack;

	while (a)
	{
		match_value = LONG_MIN;
		now = b;
		while (now)
		{
			if ((now->nbr < a->nbr) && now->nbr > match_value)
			{
				match_value = now->nbr;
				target_stack = now;
			}
			now = now->next;
		}
		if (match_value == LONG_MIN)
			a->target = ft_max_stack(b);
		else
			a->target = target_stack;
		a = a->next;
	}
}

void	ft_set_prices(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_countargstack(a);
	len_b = ft_countargstack(b);
	while (a)
	{
		if (a->upper_half == true)
			a->price = a->index;
		else
			a->price = (len_a - a->index);
		if (a->target->upper_half == true)
			a->price += a->target->index;
		else
			a->price += (len_b - a->target->index);
		a = a->next;
	}
}

void	ft_cheapest(t_stack *x)
{
	t_stack	*cheap;
	int		low;
	int		pos;

	cheap = x;
	low = x->price;
	pos = 0;
	if (!x || !cheap)
		ft_error_management(7);
	while (cheap)
	{
		if (cheap->price < low)
		{
			low = cheap->price;
			pos = cheap->index;
		}
		cheap = cheap->next;
	}
	while (x)
	{
		if (pos == x->index)
			x->cheapest = true;
		x = x->next;
	}
}
