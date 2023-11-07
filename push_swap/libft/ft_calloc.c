/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:58:38 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/25 15:58:10 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	x;

	x = 0;
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero (pointer, size * count);
	return (pointer);
}
