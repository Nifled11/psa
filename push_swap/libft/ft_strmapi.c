/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:42:21 by pquintan          #+#    #+#             */
/*   Updated: 2022/02/01 17:33:12 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy_s;
	int		aux;

	aux = 0;
	copy_s = malloc(ft_strlen(s) + 1);
	if (!(copy_s))
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (s[aux] != '\0')
	{
		copy_s[aux] = f(aux, s[aux]);
		aux++;
	}
	copy_s[aux] = '\0';
	return (copy_s);
}
