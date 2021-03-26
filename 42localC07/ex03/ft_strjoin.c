/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:55:53 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/26 09:23:41 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_strsize(int size, char **str)
{
	int	i;	
	int	total;
	int	j;

	total = 0;
	i = 0;
	while (str[i] != str[size])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
		}
		total += j;
		i++;
	}	
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_size;
	char	*strcat;
	int		i;

	i = 0;
	t_size = (ft_strsize(size, strs)) + (ft_strlen(sep) * (size - 1) + 1);
	strcat = (char *)malloc(sizeof(char) * t_size);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (!strcat)
		return (NULL);
	strcat[0] = 0;
	while (i < size - 1)
	{
		ft_strcat(strcat, strs[i]);
		ft_strcat(strcat, sep);
		i++;
	}
	ft_strcat(strcat, strs[i]);
	return (strcat);
}
