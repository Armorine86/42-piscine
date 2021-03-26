/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params_rev.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:56:30 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/24 11:19:50 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = argc;
	while (i != 1)
	{
		j = 0;
		while (argv[i - 1][j] != 0)
		{
			ft_putchar(argv[i - 1][j]);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
