/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:09:42 by mzhang            #+#    #+#             */
/*   Updated: 2024/04/22 14:11:54 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
    size_t srclen;
    size_t i;
    
    if(!dst || !src)
        return (0);
    
    srclen = ft_strlen(src);
    i = 0;
    if(dstsize != 0)
    {
        while(src[i] != '\0' && i < (dstsize-1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srclen);
}

/*int main(void)
{
    char dst[20] = "Sad dog" ;
    char src[23] = "HappyHappyHappy";
    ft_strlcpy(dst, src, 20);
    printf("%s\n%zu", dst, ft_strlcpy(dst, src, 20));
}*/
