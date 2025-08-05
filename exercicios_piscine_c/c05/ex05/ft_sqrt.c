#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int x;

	i = 1;
	x = 1;
	if(nb == 0)
		return(0);
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else
		return(0);
}

int main()
{
	printf("%d\n", ft_sqrt(4));
	return 0;
}