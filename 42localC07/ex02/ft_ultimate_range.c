/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:51:33 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/25 10:23:42 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	minmax;

	minmax = max - min;
	i = 0;
	*range = (int *)malloc(sizeof(int) * minmax);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (minmax);
}
