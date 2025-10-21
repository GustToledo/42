/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:47:59 by guhenriq          #+#    #+#             */
/*   Updated: 2025/06/30 14:48:02 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	p_char(int c);
int	p_str(char *str);
int	p_digit(unsigned long long nbr, int base, char type);
int	p_format(char type, va_list ap);
int	ft_printf(const char *str, ...);

#endif
