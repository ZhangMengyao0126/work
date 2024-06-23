/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhang <mzhang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:16:17 by mzhang            #+#    #+#             */
/*   Updated: 2024/04/29 15:16:23 by mzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    if(n == 0)
        return(0);
    i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
    {
        if(i < (n - 1))
            i++;
        else
            return(0);
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

int main(void)
{
    char s1[20] = "applebanana";
    char s2[15] = "applobanana";
    printf("%d",ft_strncmp(s1, s2, 6));
}