/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:20:33 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/26 12: by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	aux_h;
	size_t	aux_n;

	aux_h = 0;
	aux_n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[aux_n] != '\0' && haystack[aux_h] != '\0' && aux_h < len)
	{
		aux_n = 0;
		if (needle[aux_n] == haystack[aux_h])
		{
			while (needle[aux_n] == haystack[aux_h + aux_n]
				&& (aux_h + aux_n) < len)
			{
				if (needle[aux_n + 1] == '\0')
					return ((char *)&haystack[aux_h]);
				aux_n++;
			}
		}
		aux_h++;
	}
	return (NULL);
}
