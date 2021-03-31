/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:54:37 by laube             #+#    #+#             */
/*   Updated: 2021/03/30 14:40:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

// TO READ MAP AND STORE IT IN STRING
char	*map_to_str(char *path)
{
	char	c;
	char	*map_str;
	int		counter;
	int		fd;

	counter = 0;
	if ((fd = open(path, O_RDONLY)) < 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	while (read(fd, &c, 1))
		counter++;
	map_str = malloc((counter + 1) * sizeof(*map_str));
	counter = 0;
	close(fd);
	if ((fd = open(path, O_RDONLY)) < 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	while (read(fd, &c, 1))
		map_str[counter++] = c;
	map_str[counter] = '\0';
	return (map_str);
}

char	**char_to_table(char **table, int tbl_len, char *str)
{
	int	i;
	int	c_len;

	i = 0;
	while (i < tbl_len)
	{
		c_len = 0;
		while (str[c_len] != '\n')
			c_len++;
		table[i++] = malloc((c_len + 1) * sizeof(char));
	}
	// Is this right? I've assigned the next pointer to 0 without malloc.
	table[i] = 0;
	table = assign_char_to_table(table, str);
	return (table);
}

char	**assign_char_to_table(char **table, char *str)
{
	int	i;
	int	j;
	int	c_len;

	i = 0;
	j = 0;
	c_len = 0;
	while (table[i] != 0)
	{
		while (str[j] != 0)
		{
			if (str[j] == '\n')
			{
				table[i][c_len] = '\0';
				c_len = 0;
				j++;
				break ;
			}
			table[i][c_len++] = str[j++];
		}
		i++;
	}
	return (table);
}

char	**map_to_table(char *str)
{
	char	**table;
	int		i;
	int		ncounter;

	i = 0;
	ncounter = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == '\n')
			ncounter++;
	}
	table = malloc((ncounter + 1) * sizeof(*table));
	table = (char_to_table(table, ncounter, str));
	return (table);
}

char	**mapgen(char *path)
{
	char	*str;
	char	**table;

	str = map_to_str(path); 
	table = map_to_table(str);

	int i = 0;

	while (table[i])
	{
		i++;
	}
	return (table);
}

