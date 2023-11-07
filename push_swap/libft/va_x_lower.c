/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_x_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:30:07 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 17:43:33 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	look_len(unsigned int i)
{
	int	intlen;

	intlen = 1;
	if (i < 0)
		intlen++;
	while (i / 16 != 0)
	{
		i = i / 16;
		intlen++;
	}
	return (intlen);
}

static void	ft_putnbr_fd(unsigned int n)
{
	if (n > 15)
	{
		ft_putnbr_fd(n / 16);
		ft_putnbr_fd(n % 16);
	}
	else
	{
		if (n <= 9)
		{
			n = n + '0';
			write(1, &n, 1);
		}
		else
		{
			n = n - 10 + 'a';
			write(1, &n, 1);
		}
	}
}

int	va_x_lower(unsigned int x)
{
	int	len;

	ft_putnbr_fd(x);
	len = look_len(x);
	return (len);
}
