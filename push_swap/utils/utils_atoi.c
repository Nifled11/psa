/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:05:00 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/07 14:46:13 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_white_space(char *str)
{
	int	x;

	x = 0;
	while (str[x] == ' ' || str[x] == '\n')
		x++;
	return (x);
}

int	ft_sign(char *str, int x)
{
	int	sign;

	sign = 1;
	if (str[x] == '-')
		sign = -1;
	return (sign);
}

int	ft_foward_zero(char *str, int x)
{
	while (str[x] == '0' && str[x + 1])
		x++;
	return (x);
}

static void	ft_op_done(int *i, long int *res, char *str)
{
	int			x;
	long int	result;

	x = *i;
	result = *res;
	result = result * 10 + str[x] - '0';
	x++;
	*i = x;
	*res = result;
	if (str[x] && (str[x] < '0' || str[x] > '9'))
		ft_error_management(2);
}

int	ft_atoinew(char *str)
{
	int			sign;
	int			x;
	long int	result;

	sign = 1;
	x = ft_white_space(str);
	result = 0;
	if (str[x] == '-' || str[x] == '+')
		sign = ft_sign(str, x);
	if (str[x] == '-' || str[x] == '+')
		x++;
	if (!ft_isdigit(str[x]))
		ft_error_management(7);
	if (str[x] == '0' && str[x + 1])
		x = ft_foward_zero(str, x);
	if (str[x] && (str[x] < '0' || str[x] > '9'))
		ft_error_management(2);
	while ((str) && (str[x] >= '0' && str[x] <= '9'))
		ft_op_done(&x, &result, str);
	if ((sign * result) < -2147483648 || (sign * result) > 2147483647)
		ft_error_management(3);
	return (sign * result);
}
