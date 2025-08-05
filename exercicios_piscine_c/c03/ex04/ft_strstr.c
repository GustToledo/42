#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    int i;
	int j;

	i = 0;
    if (to_find[0] == '\0')
        return str;
    while (str[i])
	{
        j = 0;
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
            j++;
        }
        if (to_find[j] == '\0')
		{
            str[i + j] = '\0';
            return &str[i];
        }
        i++;
    }
    return (0);
}

int main() {
    char str[] = "mundo! ola";
    char to_find[] = "mundo";

    char *result = ft_strstr(str, to_find);
    
    if (result)
        printf("string encontrada: %s\n", result);
    else
        printf("string não encontrada.\n");

    return 0;
}