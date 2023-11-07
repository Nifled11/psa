/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:39:15 by pquintan          #+#    #+#             */
/*   Updated: 2022/02/04 17:11:15 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;
	int		aux1;
	int		aux2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	aux1 = 0;
	aux2 = 0;
	new_s = malloc(s1_len + s2_len + 1);
	if (!s1 || !s2 || !new_s)
		return (NULL);
	while (s1[aux1])
	{
		new_s[aux1] = s1[aux1];
		aux1++;
	}
	while (s2[aux2])
	{
		new_s[aux1++] = s2[aux2++];
	}
	new_s[aux1] = '\0';
	return (new_s);
}
