#include "libft.h"

void *ft_memmove(void *dst, void *src, size_t n)
{
    char *d = (char *)dst;
    char *s = (char *)src;
    size_t i;
    
    if(d == s)
        return(dst);
    if(d < s)
    {
        i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
        return(dst);
    }
    else
    {
        i = n;
        while(i--)
        {
            d[i] = s[i];
        }
        return(dst);
    }
}

int main(void)
{
    char str[50] = "Hello,World!";
    ft_memmove(str + 2, str, 5);
    str[13] = '\0'; // 确保字符串结尾
    printf("%s\n", str);
    return 0;
}