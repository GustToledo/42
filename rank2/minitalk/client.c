/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:08:22 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/20 18:30:05 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <signal.h>
#include <unistd.h>

static void	ft_ack_handler(int sig)
{
	(void)sig;
}

static void	ft_send_bits(int pid, unsigned char c, sigset_t *old)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		sigsuspend(old);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	sigset_t			block;
	sigset_t			old;
	int					pid;
	int					i;

	if (argc != 3)
		return (ft_printf("\033[91mError: wrong format.\033[0m\n"), 1);
	sigemptyset(&block);
	sigaddset(&block, SIGUSR1);
	sigprocmask(SIG_BLOCK, &block, &old);
	sa.sa_handler = ft_ack_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	pid = ft_atoi(argv[1]);
	i = 0;
	while (argv[2][i] != '\0')
	{
		ft_send_bits(pid, argv[2][i], &old);
		i++;
	}
	ft_send_bits(pid, '\n', &old);
	return (0);
}
