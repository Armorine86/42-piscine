/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:27:02 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 13:33:22 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i < 'A' || *i > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
