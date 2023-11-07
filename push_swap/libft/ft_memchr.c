/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:09:35 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/26 16:52:29 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pointer;
	size_t	aux;

	pointer = (char *)s;
	aux = 0;
	while (n > aux)
	{
		if (pointer[aux] == (char)c)
			return (&pointer[aux]);
		aux++;
	}
	return (NULL);
}
