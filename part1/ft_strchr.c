/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:24:10 by mzhang            #+#    #+#             */
/*   Updated: 2024/06/05 14:24:12 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while(*s != '\0' && c != *s)
        s++;
    if(c == *s)
        return((char*)s);
    return (0);
}

int main()
{
    const char str[] = "Hello World";
    const int c = 'o';
    char *result;
    
    result = ft_strchr(str, c);
    printf("%s",result);
    return(0);
}
