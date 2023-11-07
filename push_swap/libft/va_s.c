/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:03:06 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 17:43:28 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	va_s(char *string)
{
	int	auxlen;

	auxlen = 0;
	if (!string)
	{
		return (va_s("(null)"));
	}
	while (string[auxlen] != '\0')
	{
		write(1, &string[auxlen], 1);
		auxlen++;
	}
	return (auxlen);
}
