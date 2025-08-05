#include "so_long.h"

int	check_walls(char **map)
{
	int	i;
	int	len;
	int	last;

	last = 0;
	while (map[last])
		last++;
	last--;
	i = 0;
	while (map[0][i] && map[0][i] != '\n')
		if (map[0][i++] != '1')
			return (0);
	i = 0;
	while (map[last][i] && map[last][i] != '\n')
		if (map[last][i++] != '1')
			return (0);
	i = 1;
	while (map[i + 1])
	{
		len = ft_strlen(map[i]);
		if (map[i][0] != '1' || map[i][len - 2] != '1')
			return (0);
		i++;
	}
	return (1);
}

int vali_chars(char **map)
{
    int i;
    int j;

    i = 0;
    while (map[i])
    {
        j = 0;
        while (map[i][j] && map[i][j] != '\n')
        {
            if (!ft_strchr("01PEC", map[i][j]))
                return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_map(char **map, char *path)
{
	if (!is_rectangular(map))
	{
		ft_printf("Error: Map is not rectangular\n");
		return (0);
	}
	if (!check_walls(map))
	{
		ft_printf("Error: Map is not surrounded by walls\n");
		return (0);
	}
	if (!vali_chars(map))
	{
		ft_printf("Error: Map contains invalid characters\n");
		return (0);
	}
	if (!verify_map_elements(path))
		return (0);
	return (1);
}
