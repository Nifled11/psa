/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:46:38 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkorder(t_stack *a)
{
	t_stack	*o;
	int		flag;

	flag = 0;
	while (a)
	{
		o = a->next;
		while (o)
		{
			if (a->nbr > o->nbr)
				return (flag);
			o = o->next;
		}
		a = a->next;
	}
	return (flag + 1);
}

void	ft_duplicated(t_stack *a)
{
	t_stack	*d;

	while (a)
	{
		d = a->next;
		while (d)
		{
			if (d->nbr == a->nbr)
				ft_error_management(5);
			d = d->next;
		}
		a = a->next;
	}
}

void	ft_free_stack(t_stack *x)
{
	t_stack	*temp;

	while (x)
	{
		temp = x;
		x = x->next;
		free(temp);
	}
	x = NULL;
}
