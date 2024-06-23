/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:25:49 by mzhang            #+#    #+#             */
/*   Updated: 2024/06/06 15:25:51 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *ptr;
    
    ptr = (char *)b;
    while(len > 0)
    {
        *ptr = c;
        ptr++;
        len--;
    }
    return(b);
}

/*int main()
{
    char str[100] = "Hello World!";
    ft_memset(str + 6, 'o', 6);
    printf("After memset(): %s\n", str);
    return 0;
}*/
