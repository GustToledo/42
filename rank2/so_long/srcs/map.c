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
		ft_printf ("Invalid Char found : '%c'\n", c);
		if (temp)
			free (temp);
		exit (1);
	}
	if (er == 3)
	{
		close (fd);
		ft_printf ("Invalid Map\n");
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

int	count_lines(char *path)
{
	int		fd;
	int		count;
	char 	*line;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	while ((line = get_next_line(fd)))
	{
		free (line);
		count++;
	}
	close (fd);
	return (count);
}

char	*read_map(char *path)
{
	int		fd;
	int		lines;
	int		i;
	char	**map;

	lines = count_lines(path);
	if (lines <= 0)
		error_return(1, 0, NULL, 0);
	map = malloc(sizeof(char *) * (lines + 1));
	if (!map)
		error_return(1, 0, NULL, 0);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		error_return(1, 0, NULL, 0);
	i = 0;
	while (i < lines)
	{
		map[i] = get_next_line(fd);
		if (!map[i])
			error_return(1, fd, NULL, 0);
		i++;
	}
	map[i] = NULL;
	close (fd);
	return (map);
}

