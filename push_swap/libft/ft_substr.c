/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:59:02 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/31 18:31:57 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_s;
	size_t		aux;
	size_t		s_len;

	s_len = ft_strlen(s);
	aux = 0;
	if (len > s_len)
	{
		new_s = malloc(s_len + 1);
		len = s_len;
	}
	else
		new_s = malloc(len + 1);
	if (!s || !new_s)
		return (NULL);
	if (start < s_len)
	{
		while (aux < len)
		{
			new_s[aux++] = s[start++];
		}
	}
	new_s[aux] = '\0';
	return (new_s);
}
