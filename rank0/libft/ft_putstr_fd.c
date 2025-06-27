/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:30 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:30 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Escreve a string s no file descriptor fd.
void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write(fd, &s[i++], 1);
}

/*
int main(void)
{
	// Teste 1: Escreve no terminal (stdout)
	ft_putstr_fd("Teste stdout (fd = 1)\n", 1);

	// Teste 2: Escreve no erro padrão (stderr)
	ft_putstr_fd("Teste stderr (fd = 2)\n", 2);
    return 0;
}
*/