#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    const char *ini;
    int i;
    
    ini = s;
    i = ft_strlen(s);
    s = (s + i);
    while(*s != *ini && c != *s)
        s--;
    if(c == *s)
        return((char*)s);
    return (0);
}


int main()
{
    const char *s = "Hello World";
    const char c = 'o';
    char *result;
    
    result = ft_strrchr(s,c);
    printf("%s",result);
}