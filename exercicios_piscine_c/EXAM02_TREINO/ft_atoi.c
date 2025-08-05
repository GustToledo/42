#include <stdio.h>

int	ft_atoi(char *str)
{
	short menos;
	int i;
	int nb;
	
	i = 0;
	nb = 0;
	menos = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			menos++;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(menos % 2))
		return (nb);
	else
		return (-nb);
}


int main()
{
	char test[] = {"  ---++-4321ola567"};

	printf("%d\n", ft_atoi(test));
}

