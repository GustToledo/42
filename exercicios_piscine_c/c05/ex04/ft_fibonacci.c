#include <stdio.h>

int ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	if (index == 1 || index == 2)
        return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int index = 8;

    printf("the number of the sequence %d, is: %d" , index , ft_fibonacci(index));
	return 0;
}