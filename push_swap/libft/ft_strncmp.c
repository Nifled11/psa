/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:28:23 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/25 19:15:46 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	aux;

	aux = 0;
	if (n == 0)
		return (0);
	while (aux < n - 1 && s1[aux] != '\0' && s2[aux] != '\0'
		&& s1[aux] == s2[aux])
		aux++;
	return ((unsigned char)s1[aux] - (unsigned char)s2[aux]);
}
