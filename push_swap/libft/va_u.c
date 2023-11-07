/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:24:56 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 17:43:31 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	look_len(unsigned int u)
{
	int	intlen;

	intlen = 1;
	while (u / 10 != 0)
	{
		u = u / 10;
		intlen++;
	}
	return (intlen);
}

static void	ft_putnbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	n = 48 + (n % 10);
	write(fd, &n, 1);
}

int	va_u(unsigned int u)
{
	int	len;

	len = look_len(u);
	ft_putnbr_fd(u, 1);
	return (len);
}
