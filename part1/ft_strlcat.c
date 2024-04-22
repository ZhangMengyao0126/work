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


#include<stdio.h>

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

size_t strlcat(char *dest, char *src, size_t size)
{
    size_t destsize;
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    destsize = ft_strlen(dest);
    
    if(!dest || !size)
        return(0);
    if(size != 0)
    {
        while(dest[i] != '\0')
        {
            i++;
        }
        while(j < size - destsize -1)
        {
            dest[i] = src[j];
            j++;
        }
        dest[j] = '\0';
    }
    destsize = ft_strlen(dest);
    return (destsize);
}

int main(void)
{
    char dest[50] = "Sad dog";
    char src[30] = "will find her true cat.";
    strlcat(dest, src, 20);
    printf("%s\n%zu", dest, strlcat(dest, src, 20));
}