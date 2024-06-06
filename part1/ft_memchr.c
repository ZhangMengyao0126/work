#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while(i < n)
    {
        if(((unsigned char*)s)[i] == (unsigned char)c)
            return((void*)s + i);
        i++;
    }
    return (0);
}


int main(void)
{
    const char s[50] = "Hello,World!";
    const char c = 'o';
    void *result;
    
    result = ft_memchr(s, c, 5);
    printf("%s\n", result);
    return 0;
}