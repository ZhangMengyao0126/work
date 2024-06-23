#include "libft.h"

int ft_memcmp(void *s1, void *s2, size_t n)
{
    unsigned char *s1c = s1;
    unsigned char *s2c = s2;
    size_t i;
    
    i = 0;
    while(i++ < n && *(s1c + i) == *(s2c + i));
    if(i == n)
        return (0);
    return(*(s1c + i) - *(s2c + i));
}

int main()
{
    char s1[50] = "Applebanana";
    char s2[50] = "Applobanana";
    printf("%d",ft_memcmp(s1,s2,10));
}