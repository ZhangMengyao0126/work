#include "libft.h"

char *ft_substr(char *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *new_str;
    
    i = 0;
    if (!s || !(new_str = (char *)malloc(len + 1)))
        return (0);
    while(i < len)
    {
        new_str[i] = s[start + i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int main (void)
{
    char s[50] = "Hello,World!";
    printf("%s",ft_substr(s, 6, 5));   
}