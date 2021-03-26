/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:17:15 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/24 14:17:16 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *tab;

    i = 0;
    
    tab = malloc(sizeof(int) * (max - min));
    if (min >= max)
        return (0);
    if (tab == NULL)
        return NULL;
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}