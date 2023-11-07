/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:10:56 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:48:12 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_error_management(int a)
{
	if (a < 0)
		ft_printf("Unknown error\n");
	else
		ft_printf("Error\n");
	exit(0);
}
