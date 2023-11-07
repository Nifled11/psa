/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:36 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/01 18:09:25 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stack **a, t_stack **b, int index)
{
	if (index == 1)
		ft_printf("rrr\n");
	ft_rra(a, index);
	ft_rrb(b, index);
}
