/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:05:22 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/29 12:54:37 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*keep;

	keep = (char *)s;
	while (*keep)
	{
		if (*keep == (char)c)
		{
			return (keep);
		}
		keep++;
	}
	if (*keep == '\0' && (char)c == '\0')
	{
		return (keep);
	}
	return (NULL);
}
