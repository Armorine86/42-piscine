/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:07:22 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/31 18:01:50 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int main(int argc, char **argv)
{
    int 		i;
	t_mapinfo	info;
	char		**map;
	//char		*input;

	if (argc == 1)
	{
	//	input = read_it();
	//	map = mapgen(input);
	}
    i = 1;
    while (i < argc)
    {
        map = mapgen(argv[i]);
		info = create_prop(map);
		solve_it(&info);
        i++;
		print_matrix(info.map);
    }
    return (0);
}

t_mapinfo	create_prop(char **table)
{
	t_mapinfo	info;
	int			i;
	int			first_len;

	first_len = ft_strlen_char(table[0], '\n');
	info.obstacle = table[0][first_len - 2];
	info.empty = table[0][first_len - 3];
	info.full = table[0][first_len - 1];
	info.map = &table[1];
	i = 0;
	while (info.map[i])
		i++;
	info.height = i;
	i = 0;
	while (info.map[0][i])
		i++;
	info.width = i;
	info.x_pos = 0;
	info.y_pos = 0;
	return (info);
}
/*
char	*read_it(void)
{
	char	c;
	int		counter;
	char	*str;

	counter = 0;
	while (read(0, &c, 1))
	{
		counter++;
	}
	return (str);
}
*/
