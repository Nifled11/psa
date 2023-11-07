/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:08:17 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/20 15:25:39 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*newdest;
	unsigned char	*source;
	size_t			aux;

	newdest = (unsigned char *)dst;
	source = (unsigned char *)src;
	aux = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			newdest[len] = source[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
