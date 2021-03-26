/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:29:42 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/24 08:25:00 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	char	*c;
	int		i;

	i = 1;
	c = base;
	if (*base == 0)
		return (0);
	while (*c != '\0')
	{
		if (*c == '-' || *c == '+')
			return (0);
		while (*(c + i) != '\0')
		{
			if (*(c + i) == *c)
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

int	base_length(char *base)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = base;
	while (*ptr != '\0')
	{
		ptr++;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = base_length(base);
	if (!check_base(base))
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / 10, base);
		write(1, "8", 1);
	}
	if (nbr < 0 && nbr > -2147483648)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
		return ;
	}
	else if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		write(1, nbr + base, 1);
}
