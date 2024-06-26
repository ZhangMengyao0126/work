#include "libft.h"

static int count_words(const char *s, char c)
{
    int i;
    int in_word;
    
    i = 0;
    in_word = 0;
    while(*s)
    {
        if(*s != c && in_word == 0)
        {
            i++;
            in_word = 1;
        }
        else if(*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return (i);
}

static char *word_dup(const char *s, int start, int finish)
{
    char *word;
    int i;
    
    i = 0;
    word = (char *)malloc(finish - start + 1);
    while(start < finish)
    {
        word[i] = s[start];
        start++;
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **split;
    size_t i;
    size_t j;
    size_t word_start;
    int in_word;
    
    if(!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
        return (0);
    i = 0;
    j = 0;
    in_word = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && in_word == 0)
        {
            word_start = i;
            in_word = 1;
        }
        else if((s[i] == c|| i == ft_strlen(s)) && in_word == 1)
        {
            split[j] = word_dup(s, word_start, i);
            in_word = 0;
            j++;
        }
        i++;
    }
    split[j] = NULL;
    return(split);
}

/*int main (void)
{
    char s[50] = "Hello Word This Is A Test ";
    char c = ' ';
    char **result;
    int i;
    
    result = ft_split(s, c);
    i = 0;
    while(result[i] != NULL)
    {
        printf("result[%d] = %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
}*/