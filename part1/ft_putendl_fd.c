#include "libft.h"

void ft_putendl_fd(char const*s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

/*int main(void)
{
    char *s = "Hello World";
    ft_putendl_fd(s,1);
}*/