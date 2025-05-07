/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:22 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:22 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve a string s seguida de uma quebra de linha no file descriptor fd.
void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
	// Teste 1: Escreve no terminal (stdout)
	ft_putstr_fd("Teste stdout (fd = 1)\n", 1);

	ft_putchar_fd('A', 1); // Deve imprimir A no terminal
	write(1, "\n", 1);
    return 0;
}
*/