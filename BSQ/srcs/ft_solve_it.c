/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_it.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:07:11 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/31 15:41:09 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void place_x(t_mapinfo *info, int square)
{
    int i;
    int j;

    i = 0;
    while (i < square)
    {
        j = 0;
        while (j < square)
        {
            info->map[info->y_pos + i][info->x_pos + j] = info->full;
            j++;
        }
        i++;
    }
}

int try_square(t_mapinfo *info, int size, int x, int y)
{
    int i;
    int j;

    i = 0;
    while (i < size && i < info->width)   
    {
        j = 0;
        while (j < size && j < info->height)
        {
            if (info->map[j + y][i + x] == info->obstacle)
			{
                return (0);
			}
            j++;
        }
        i++;
    }
    if (i == size && j == size)
        return (size);
    else
        return (0);
}

void    place_square(t_mapinfo *info, int x, int y, int *square)
{
    int size;

    size = 1;
    while (try_square(info, size, x, y))
	{
        size++;
	}
    size--;
    if (size > *square)
    {
        *square = size;
        info->x_pos = x;
        info->y_pos = y;
    }
}

t_mapinfo	solve_it(t_mapinfo *info)
{
	int x;
	int y;
	int square;

	y = 0;
	info->x_pos = 0;
	info->y_pos = 0;
    square = 0;
    while (square + y < info->height)
    {
        x = 0;
        while (square + x < info->width)
        {
            place_square(info, x, y, &square); 
            x++;
        }
        y++;
    }
    place_x(info, square);
	return (*info);
}
