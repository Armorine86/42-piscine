/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:59:44 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/14 17:22:41 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	{
		while (i <= 98)
		{
			j = i + 1;
			while (j <= 99)
			{
				ft_putchar((i / 10) + '0');
				ft_putchar((i % 10) + '0');
				write(1, " ", 1);
				ft_putchar((j / 10) + '0');
				ft_putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					write(1, ", ", 2);
				}
				j++;
			}
			i++;
		}
	}
}
