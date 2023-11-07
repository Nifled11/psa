/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:20:35 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/29 12:54:31 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lenall;
	size_t	lentry;
	size_t	x;
	size_t	y;

	lensrc = ft_strlen(src);
	lenall = ft_strlen(src) + ft_strlen(dst);
	lentry = lensrc + dstsize;
	x = 0;
	y = 0;
	if (dstsize == 0)
		return (lensrc);
	if (ft_strlen(dst) > dstsize)
		return (lentry);
	while (dst[x] != '\0')
		x++;
	while (src[y] != '\0' && x < dstsize - 1)
	{
		dst[x] = src[y];
		y++;
		x++;
	}
	dst[x] = '\0';
	return (lenall);
}
