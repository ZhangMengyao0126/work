/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:52:36 by mzhang            #+#    #+#             */
/*   Updated: 2024/06/06 14:52:49 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *tmp = (char *)s;
    while(n > 0)
    {
        *tmp = 0;
        tmp++;
        n--;
    }
}

int main()
{
    char str[100] = "Hello World!";
    ft_bzero(str + 6, 1);
    printf("After memset(): %s\n", str);
    return 0;
}
