/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:08:12 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/19 19:49:38 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*newdest;
	unsigned char	*source;
	size_t			aux;

	aux = 0;
	source = (unsigned char *)src;
	newdest = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (aux < n)
	{
		newdest[aux] = source[aux];
		aux++;
	}
	return (dst);
}
