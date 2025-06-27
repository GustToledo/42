#include "get_next_line.h"

int main(void)
{
	int fd = open("Makefile", O_RDONLY);
	char *line;

	if (fd < 0)
	{
		printf("erro");
		return (1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}