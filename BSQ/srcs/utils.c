/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:41:28 by laube             #+#    #+#             */
/*   Updated: 2021/03/31 16:32:27 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_strlen_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (i);
}

void	print_matrix(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		ft_putstr(table[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
