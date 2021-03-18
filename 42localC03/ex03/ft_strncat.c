/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:53:39 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 11:54:31 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;

    i = 0;
   // if (*dest == 0 || *src == 0)

    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0' && i < nb)
    {
        *dest++ = *src++;
        i++;
    }
    *dest = '\0';
    return (dest);
}

int main(void)
{
    char test1[20] = "Hello";
    char test2[] = "World";

    ft_strncat(test1,test2, 3);
    printf("%s", test1);
}
