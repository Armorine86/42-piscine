/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:18:14 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 15:38:56 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*to_lower;

	to_lower = str;
	while (*to_lower != '\0')
	{
		if (*to_lower >= 'A' && *to_lower <= 'Z')
		{
			*to_lower = *to_lower + 32;
		}
		to_lower++;
	}
	return (str);
}
