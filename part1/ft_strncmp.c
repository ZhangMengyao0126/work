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

#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            return(s1[i] - s2[i]);
        }
    }
    return (0);
}

int main(void)
{
    char s1[20] = "applebanana";
    char s2[15] = "applobanana";
    printf("%d",ft_strncmp(s1, s2, 6));
}