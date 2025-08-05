/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:22:51 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/04 14:22:52 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *n1, int *n2)
{
	int chg;

	chg = *n1;
	*n1 = *n2;
	*n2 = chg;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;


	j = size - 1;
	i = 0;
	while(i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	for(int i = 0; i < size; i++){
		printf("%d", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	for(int i = 0; i < size; i++){
	printf("%d", tab[i]);
	}
	printf("\n");
	return 0;
}