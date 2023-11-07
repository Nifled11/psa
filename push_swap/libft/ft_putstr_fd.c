/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:56:35 by pquintan          #+#    #+#             */
/*   Updated: 2022/01/21 19:54:08 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned long	aux;

	aux = 0;
	if (s)
	{
		while (s[aux] != '\0')
		{
			write (fd, &s[aux], 1);
			aux++;
		}
	}
}
