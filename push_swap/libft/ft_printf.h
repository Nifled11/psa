/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:18:10 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/25 16:25:24 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *string, ...);
int	va_c(int c);
int	va_s(char *string);
int	va_i_and_d(int i);
int	va_u(unsigned int u);
int	va_x_lower(unsigned int x);
int	va_x_upper(unsigned int x);
int	va_p(unsigned long p);

#endif