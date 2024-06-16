#include <libft.h>

char *ft_strtrim(const char *s1, const char *set)
{
    size_t i;
    
    if(!s1 || !set)
        return(0);
    while(*s1 && ft_strchr(set, *s1))
        s1++;
    i = ft_strlen(s1)；
    while(*s && ft_strchr(set, s1[i]))
        i--;
    return(ft_substr(s1, 0, i+1));
}