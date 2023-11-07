/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:45:03 by pquintan          #+#    #+#             */
/*   Updated: 2022/02/04 17:30:48 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	first;

	len = ft_strlen(s1);
	first = 0;
	while (s1[first])
	{
		if (ft_strchr(set, s1[first]))
			first++;
		else
			break ;
	}
	return (first);
}

static	size_t	ft_end(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len)
	{
		if (ft_strchr(set, s1[len]))
			len--;
		else
			break ;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy_s1;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	copy_s1 = malloc(end - start + 2);
	if (!copy_s1)
		return (NULL);
	ft_strlcpy(copy_s1, s1 + start, end - start + 2);
	return (copy_s1);
}
