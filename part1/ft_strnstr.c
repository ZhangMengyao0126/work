/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:03:23 by mzhang            #+#    #+#             */
/*   Updated: 2024/06/06 12:03:24 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t h;
    size_t n;
    
    h = 0;
    if(needle[0] == '\0')
        return ((char *)haystack);
    while(haystack[h] != '\0' && h < len)
    {
        n = 0;
        while(haystack[h + n] == needle[n] && (h + n) < len)
        {
            if(needle[n + 1] == '\0')
                return((char *)&haystack[h]);
            n++;
        }
        h++;
    }
    return (0);
}

/*int main(void)
{
    const char *haystack = "Hello World";
    const char *needle = "orld";
    size_t len = 11;
    char *result = ft_strnstr(haystack, needle, len);
    printf("%s",result);
}*/
