/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_i_and_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:28:45 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 17:43:21 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	look_len(int i)
{
	int	intlen;

	intlen = 1;
	if (i < 0)
		intlen++;
	while (i / 10 != 0)
	{
		i = i / 10;
		intlen++;
	}
	return (intlen);
}

static void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	n = 48 + (n % 10);
	write(fd, &n, 1);
}

int	va_i_and_d(int i)
{
	int	len;

	len = look_len(i);
	ft_putnbr_fd(i, 1);
	return (len);
}
