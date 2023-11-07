/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:19:30 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 17:43:25 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	look_len(uintptr_t p)
{
	int	intlen;

	intlen = 0;
	while (p != 0)
	{
		intlen++;
		p = p / 16;
	}
	return (intlen);
}

static void	ft_adress_print(uintptr_t p)
{
	if (p > 15)
	{
		ft_adress_print(p / 16);
		ft_adress_print(p % 16);
	}
	else
	{
		if (p <= 9)
		{
			p = p + '0';
			write(1, &p, 1);
		}
		else
		{
			p = p - 10 + 'a';
			write(1, &p, 1);
		}
	}
}

int	va_p(unsigned long p)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	if (!p)
	{
		write(1, "0", 1);
		len += 1;
	}
	else
	{
		ft_adress_print(p);
		len = len + look_len(p);
	}
	return (len);
}
