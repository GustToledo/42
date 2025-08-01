#include "so_long.h"

int verify_map_elements(char *path)
{
    int exit;
    int start;
    int collectible;

    exit = count_char(path, 'E');
    start = count_char(path, 'P');
    collectible = count_char(path, 'C');
    if (exit != 1)
    {
        ft_printf("Error: Invalid number of exits\n");
        return (0);
    }
    if (start != 1)
    {
        ft_printf("Error: Invalid number of starts\n");
        return (0);
    }
    if (collectible < 1)
    {
        ft_printf("Error: Invalid number of collectibles\n");
        return (0);
    }
    return (1);
}

int count_char(char *path, char target)
{
    int fd;
    char *temp;
    int count;
    int i;

    fd = open(path, O_RDONLY);
    if (fd < 0)
        return (0);
    count = 0;
    temp = get_next_line(fd);
    while (temp)
    {
        i = 0;
        while (temp[i] && temp[i != '\n'])
        {
            if (temp[i] == target)
                count++;
            i++;
        }
        free(temp);
        temp = get_next_line(fd);
    }
    close(fd);
    return (count);
}