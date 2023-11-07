/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:20:51 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/29 12:55:32 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_counter(long num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = num * -1;
		size++;
	}
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

static	void	ft_replace(long n, char *i_to_c, long x)
{
	if (n < 0)
	{
		i_to_c[0] = '-';
		n = n * -1;
	}
	if (n >= 10)
		ft_replace((n / 10), i_to_c, (x - 1));
	i_to_c[x] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*i_to_c;
	size_t	counter;

	counter = ft_counter(n);
	i_to_c = malloc(counter + 1);
	if (!i_to_c)
		return (NULL);
	i_to_c[counter--] = '\0';
	ft_replace(n, i_to_c, counter);
	return (i_to_c);
}
