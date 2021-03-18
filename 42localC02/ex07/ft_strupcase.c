/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:43:41 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/18 15:34:08 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*to_upper;

	to_upper = str;
	while (*to_upper != '\0')
	{
		if (*to_upper >= 'a' && *to_upper <= 'z')
		{
			*to_upper = *to_upper - 32;
		}
		to_upper++;
	}
	return (str);
}
