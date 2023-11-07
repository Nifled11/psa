/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:44:26 by pquintan          #+#    #+#             */
/*   Updated: 2022/02/04 17:30:17 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_countwords(char const *s, char c)
{
	int	aux;
	int	words;

	aux = 0;
	words = 0;
	while (s[aux] != '\0')
	{
		if (s[aux] != c)
		{
			words++;
			while (s[aux] != '\0' && s[aux] != c)
				aux++;
		}
		else
			aux++;
	}
	return (words);
}

static	size_t	ft_lenwords(char const *s, char c, size_t words)
{
	size_t	lenwords;
	size_t	counter;
	size_t	aux;

	aux = 0;
	counter = 0;
	while (counter <= words)
	{
		lenwords = 0;
		while (s[aux] == c && aux < ft_strlen(s))
			aux++;
		while (s[aux] != c && aux < ft_strlen(s))
		{
			lenwords++;
			aux++;
		}
		counter++;
	}
	return (lenwords);
}

static	void	ft_fill(char *res, char const *s, char c, size_t checkwords)
{
	size_t	aux_check;
	size_t	aux1;
	size_t	aux_res;

	aux1 = 0;
	aux_check = 0;
	aux_res = 0;
	while (aux_check < checkwords)
	{
		while (s[aux1] == c && aux1 < ft_strlen(s))
			aux1++;
		while (s[aux1] != c && aux1 < ft_strlen(s))
			aux1++;
		aux_check++;
	}
	while (s[aux1] == c && aux1 < ft_strlen(s))
		aux1++;
	while (s[aux1] != c && aux1 < ft_strlen(s))
	{
		res[aux_res] = s[aux1];
		aux1++;
		aux_res++;
	}
	res[aux_res] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;
	size_t	checkwords;
	size_t	len_words;

	words = ft_countwords(s, c);
	checkwords = 0;
	res = malloc((words + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	while (checkwords < words)
	{
		len_words = ft_lenwords(s, c, checkwords);
		res[checkwords] = malloc((len_words + 1));
		if (!res)
			return (NULL);
		ft_fill(res[checkwords], s, c, checkwords);
		checkwords++;
	}
	res[checkwords] = NULL;
	return (res);
}
