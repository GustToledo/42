/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:38:11 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/04 16:38:13 by guhenriq         ###   ########.fr       */
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

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while(j < size -1 -i)
		{
			if(tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {5, 2, 3, 2, 1};
	int size = 5;

	for(int i = 0; i < size; i++){
		printf("%d\n", tab[i]);
	}

	ft_sort_int_tab(tab, size);

	for(int i = 0; i < size; i++){
	printf("%d", tab[i]);
	}
}
