/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:23:01 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/24 14:23:02 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    //printf("Length is: %d", i);
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *cpy;
    int i;

    i = 0;
    cpy = malloc(sizeof(char)* (ft_strlen(src) + 1));
    if (cpy == NULL)
        return NULL;
    while (src[i] != '\0')
    {
        cpy[i] = src[i];
        i++;
    }
    cpy[i] = '\0';
    printf("Copy: %p\n", cpy);
    return (cpy);
}
