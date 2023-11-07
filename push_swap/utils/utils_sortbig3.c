/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sortbig3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:46:31 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkmin(t_stack *a)
{
	int	num;

	num = a->nbr;
	while (a)
	{
		if (a->nbr < num)
			num = a->nbr;
		a = a->next;
	}
	return (num);
}

int	ft_checkmax(t_stack *a)
{
	int	num;

	num = a->nbr;
	while (a)
	{
		if (a->nbr > num)
			num = a->nbr;
		a = a->next;
	}
	return (num);
}

t_stack	*ft_max_stack(t_stack *x)
{
	int		num;
	t_stack	*max;

	num = INT_MIN;
	max = x;
	if (!x || !max)
		ft_error_management(7);
	while (x)
	{
		if (x->nbr > num)
		{
			num = x->nbr;
			max = x;
		}
		x = x->next;
	}
	return (max);
}

t_stack	*ft_min_stack(t_stack *x)
{
	int		num;
	t_stack	*min;

	num = INT_MAX;
	min = x;
	if (!x || !min)
		ft_error_management(7);
	while (x)
	{
		if (x->nbr < num)
		{
			num = x->nbr;
			min = x;
		}
		x = x->next;
	}
	return (min);
}

int	ft_countargstack(t_stack *a)
{
	t_stack	*x;
	int		arg;

	x = a;
	arg = 0;
	while (x)
	{
		x = x->next;
		arg++;
	}
	return (arg);
}
