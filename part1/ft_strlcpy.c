/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:33:30 by mzhang            #+#    #+#             */
/*   Updated: 2024/04/22 11:33:35 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

size_t ft_strlen(char *str)
{
    size_t i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;
    
    if(!dst || !src)
        return (0);
    
    srcsize = ft_strlen(src);
    if(dstsize != 0)
    {
        while(src[i] != '\0' && i < dstsize-1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}

int main(void)
{
    char dst[20] = "Sad dog" ;
    char src[23] = "HappyHappyHappy";
    ft_strlcpy(dst, src, 20);
    printf("%s\n%zu", dst, ft_strlcpy(dst, src, 20));
}