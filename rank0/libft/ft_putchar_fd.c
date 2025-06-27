/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:20 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:20 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve um caractere c no file descriptor fd.
void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main(void)
{
ft_putchar_fd('A', 1); // Deve imprimir A no terminal
write(1, "\n", 1);

// 2. Teste no erro padrão (stderr)
ft_putchar_fd('E', 2); // Deve imprimir E no stderr
write(2, "\n", 1);
    return 0;
}
*/