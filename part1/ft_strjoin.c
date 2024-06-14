#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    if(!s1 || !s2 || !(new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
        return (0);
    while(s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        new_str[i+j] = s2[j];
        i++;
        j++;
    }
    new_str[i + j] = '\0';
    return(new_str);
}