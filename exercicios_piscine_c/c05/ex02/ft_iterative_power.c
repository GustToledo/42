#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int expo;

	expo = 1;
	if(power == 0)
		return (1);
	if(power <= 0)
	return (0);
	while(power > 0)
	{
		if(power % 2 != 0)
			expo *= nb;
		nb *= nb;
		power /= 2;
	}
	return(expo);
}

int main()
{
	printf("The result is: %d", ft_iterative_power(5, 3));
	return (0);
}