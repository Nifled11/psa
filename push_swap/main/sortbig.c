/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:36 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:29 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_nodes_on(t_stack *a, t_stack *b)
{
	ft_indexandhalf(a);
	ft_indexandhalf(b);
	ft_set_target_a_to_b(a, b);
	ft_set_prices(a, b);
	ft_cheapest(a);
}

void	ft_movecheap(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = ft_return_cheapest(*a);
	if (cheapest->upper_half == true && cheapest->target->upper_half == true)
		ft_top_rotate(a, b, cheapest);
	else if (cheapest->upper_half == false
		&& cheapest->target->upper_half == false)
		ft_top_rotate(a, b, cheapest);
	ft_rotate_stack(a, cheapest, 'a');
	ft_rotate_stack(b, cheapest, 'b');
	ft_pb(b, a, 0);
}

void	ft_nodes_litte(t_stack *a, t_stack *b)
{
	ft_indexandhalf(a);
	ft_indexandhalf(b);
	ft_set_target_b_to_a(a, b);
}

void	ft_movecheap_little(t_stack **a, t_stack **b)
{
	ft_rotate_stack(a, (*b)->target, 'a');
	ft_pa(a, b, 0);
}

void	ft_sortmore(t_stack **a, t_stack **b)
{
	int	indexdouble;

	indexdouble = 0;
	if (ft_countargstack(*a) != 3 && !ft_checkorder(*a))
		ft_pb(b, a, indexdouble);
	if (ft_countargstack(*a) != 3 && !ft_checkorder(*a))
		ft_pb(b, a, indexdouble);
	if (ft_checkorder(*b) == 1)
		ft_rb(b, indexdouble);
	while (ft_countargstack(*a) != 3 && !ft_checkorder(*a))
	{
		ft_nodes_on(*a, *b);
		ft_movecheap(a, b);
	}
	if (ft_checkorder(*a) == 0)
		ft_sortthree(a, indexdouble);
	while (ft_countargstack(*b) != 0)
	{
		ft_nodes_litte(*a, *b);
		ft_movecheap_little(a, b);
	}
	while (ft_smallestop(*a) != 0)
		ft_rra(a, indexdouble);
}
