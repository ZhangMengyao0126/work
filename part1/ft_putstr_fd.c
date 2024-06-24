#include "libft.h"

void ft_putstr_fd(char const*s, int fd)
{
    write(fd, s, ft_strlen(s));
}

/*int main(void)
{
    char *s = "Hello World";
    ft_putstr_fd(s,1);
}*/