#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;
    size_t i;
    
    d = (char *)dst;
    s = (char *)src;
    i = 0;
    if(d == s)
        return(d);
    if(d < s)
    {
        i = 0;
        while(i < len)
        {
            ((char *)d)[i] = ((char *)s)[i];
            i++;
        }
    }
    else
    {
        i = len;
        while(i--)
        {
            ((char *)d)[i] = ((char *)s)[i];
        }
    }
    return (d);
}

/*int main(void)
{
    char str[50] = "Hello,World!";
    ft_memmove(str + 2, str, 5);
    str[13] = '\0'; // 确保字符串结尾
    printf("%s\n", str);
    return 0;
}*/