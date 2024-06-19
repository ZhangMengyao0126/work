#include <libft.h>

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    if(!s || !f || !(str = ft_strdup(s)))
        return (0);
    i = 0;
    while(str[i] != '\0')
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return(str);
}