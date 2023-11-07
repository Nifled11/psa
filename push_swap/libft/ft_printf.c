/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:16:58 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/21 10:02:06 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_sort_va(va_list args, const char *string, unsigned int aux)
{
	unsigned int	len;

	len = 0;
	if (string[aux] == '%')
	{
		write (1, "%%", 1);
		len++;
	}
	else if (string[aux] == 'c')
		len = va_c(va_arg(args, int));
	else if (string[aux] == 's')
		len = va_s(va_arg(args, char *));
	else if (string[aux] == 'i')
		len = va_i_and_d(va_arg(args, int));
	else if (string[aux] == 'd')
		len = va_i_and_d(va_arg(args, int));
	else if (string[aux] == 'u')
		len = va_u(va_arg(args, unsigned int));
	else if (string[aux] == 'x')
		len = va_x_lower(va_arg(args, unsigned int));
	else if (string[aux] == 'X')
		len = va_x_upper(va_arg(args, unsigned int));
	else if (string[aux] == 'p')
		len = va_p(va_arg(args, unsigned long));
	return (len);
}

int	ft_printf(const char *string, ...)
{
	va_list			args;
	int				len;
	unsigned int	aux;

	len = 0;
	aux = 0;
	va_start(args, string);
	while (string[aux] != '\0')
	{
		if (string[aux] == '%')
		{
			aux++;
			len = len + ft_sort_va(args, string, aux);
		}
		else if (string[aux] != '%')
		{
			write(1, &string[aux], 1);
			len++;
		}
		aux++;
	}
	va_end (args);
	return (len);
}
