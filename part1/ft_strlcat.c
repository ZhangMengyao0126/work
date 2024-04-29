/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:06:14 by mzhang            #+#    #+#             */
/*   Updated: 2024/04/22 14:06:21 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(char *str)
{
    size_t i;
    
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

size_t ft_strlcat(char *dest, char *src, size_t dstsize)
{
    size_t dstlenfinal;
    size_t len;
    size_t i;
    size_t j;
    
    if(!dest || !src)
        return(0);
        
    len = ft_strlen(dest) + ft_strlen(src);
    
    if(dstsize == 0 || dstsize <= ft_strlen(dest))
        return (dstsize + ft_strlen(src));
        
    i = ft_strlen(dest);
    j = 0;
    
    if(dstsize != 0)
    {
        while(src[j] != '\0' && i < dstsize - 1)
        {
            dest[i] = src[j];
            i++;
            j++;
        }
        dest[i] = '\0';
    }
    return (len);
}

int main(void)
{
    char dest[50] = "Brave dog";
    char src[30] = " can face the whole new world.";
    printf("%s\n%zu", dest, ft_strlcat(dest, src, 50));
}