/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:36:52 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/25 15:24:15 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			aux;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	aux = 0;
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (aux < n)
	{
		if (uc_s1[aux] == uc_s2[aux])
			aux++;
		else
			return (uc_s1[aux] - uc_s2[aux]);
	}
	return (0);
}
