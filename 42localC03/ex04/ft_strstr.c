/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:50:40 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 15:50:43 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*hay;
	char	*need;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		hay = str;
		need = to_find;
		while (*need && *hay == *need)
		{
			++hay;
			++need;
		}
		if (*need == 0)
			return (to_find);
		++str;
	}
	return (0);
}
