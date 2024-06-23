#include "libft.h"

size_t	ft_strlen(const char*str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

int main(void)
{
    char *s = "Hello World";
    ft_putstr_fd(s,1);
}