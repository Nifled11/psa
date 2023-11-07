/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortlittle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:36 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 12:03:09 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortwo(t_stack **a)
{
	int	indexdouble;

	indexdouble = 0;
	ft_sa(*a, indexdouble);
}

void	ft_sortthree(t_stack **a, int indexdouble)
{
	int	one;
	int	two;
	int	three;

	one = (*a)->nbr;
	two = (*a)->next->nbr;
	three = (*a)->next->next->nbr;
	if (one > two && one < three)
		ft_sa(*a, indexdouble);
	else if (one > two && one > three && two > three)
	{
		ft_sa(*a, indexdouble);
		ft_rra(a, indexdouble);
	}
	else if (one > two && two < three && one > three)
		ft_ra(a, indexdouble);
	else if (one < two && two > three && one < three)
	{
		ft_sa(*a, indexdouble);
		ft_ra(a, indexdouble);
	}
	else if (one < two && two > three && one > three)
		ft_rra(a, indexdouble);
}
