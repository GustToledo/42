#include <stdio.h>

int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	if(nb <= 1)
		nb = 2;
	i = nb;
	while(i < 2 * nb)
	{
		if(ft_is_prime(i))
			return (i);
		i++;
	}
	return(0);
}
int main()
{
	printf("%d", ft_find_next_prime(8));
	return 0;
}