#include "so_long.h"

void	error_return(int er, int fd, char *temp, char c)
{
	if (er == 1)
	{
		perror("Invalid Map");
		exit (1);
	}
	if (er == 2)
	{
		close (fd);
		printf ("Invalid Char found : '%c'\n", c);
		if (temp)
			free (temp);
		exit (1);
	}
	if (er == 3)
	{
		close (fd);
		printf ("Invalid Map\n");
		if (temp)
			free (temp);
		exit (1);
	}
}

void matrix_free(int **mat, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
		free(mat[i++]);
	free(mat);
}

