/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:24:48 by mzhang            #+#    #+#             */
/*   Updated: 2024/06/06 17:25:02 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcopy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst;
    char *s = (char *)src;
    size_t i;
    
    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);
}

int main()
{
    char dst[100] = "World World!";
    char src[100] = "Hello";
    ft_memcopy(dst,src,5);
    printf("%s", dst);
}
