/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:50:40 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 15:50:43 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_compare(char *str, char *to_find, char *hayptr, char *nptr);

char    *ft_strstr(char *str, char *to_find)
{
    char    *hayptr;
    char    *nptr;

    hayptr = str;
    nptr = to_find;
    while (*hayptr != *nptr)
    {
        hayptr++;
    }
    return ft_compare(str, to_find, hayptr, nptr);
        
}

char    *ft_compare(char *str, char *to_find, char *hayptr, char *nptr)
{
    while (*hayptr == *nptr)
        {
            hayptr++;
            nptr++;
        }
        nptr = to_find;
        while (*hayptr != *nptr)
        {    
            nptr++;
        }
        if (*nptr == '\0')
            return (to_find);
        else
            return (str);
        ft_compare(str, to_find, hayptr, nptr);
        
}



int main(void)
{
    char hay[] = "I love mamamo N' Roll!";
    char needle[] = "mamo";
    ft_strstr(hay, needle);
    return 0;
}