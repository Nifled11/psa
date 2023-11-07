/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:05:18 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/29 12:54:17 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*keep;
	int		x;

	keep = (char *)s;
	x = 0;
	while (s[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return (&keep[x]);
		x--;
	}
	return (NULL);
}
