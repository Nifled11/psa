/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:27:34 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/19 16:01:06 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char	*temp;

	x = 0;
	temp = (char *) b;
	while (x < len)
	{
		temp[x] = (unsigned char)c;
		x++;
	}
	return (b);
}
