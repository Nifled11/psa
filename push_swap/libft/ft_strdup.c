/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:55:07 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/25 19:27:33 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	size_t	len_src;
	int		aux;

	len_src = ft_strlen((char *)s1);
	pointer = malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	aux = 0;
	if (!(pointer))
		return (NULL);
	ft_strlcpy(pointer, s1, len_src + 1);
	return (pointer);
}
