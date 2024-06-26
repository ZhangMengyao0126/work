#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1c;
    unsigned char *s2c;
    size_t i;
    
    i = -1;
    s1c = (unsigned char *)s1;
    s2c = (unsigned char *)s2;
    while(++i < n && *(s1c + i) == *(s2c + i));
    if(i == n)
        return (0);
    return(*(s1c + i) - *(s2c + i));
}

/*int main()
{
    char s1[50] = "Applebanana";
    char s2[50] = "Applobanana";
    printf("%d",ft_memcmp(s1,s2,10));
}*/