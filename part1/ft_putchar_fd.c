#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    char c = 'H';
    ft_putchar_fd(c,1);
}