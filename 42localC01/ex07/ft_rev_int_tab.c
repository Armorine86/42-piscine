/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:26:02 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/17 11:31:24 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	start;

	start = 0;
	while (start < size)
	{
		buffer = tab[start];
		tab[start] = tab[size -1];
		tab[size - 1] = buffer;
		start++;
		size--;
	}
}

int main(void)
{
	int size;
	size = 5;
	int tab[5] = {1, 2 ,3 ,4 ,5};
	ft_rev_int_tab(tab, size);
	printf(" %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);

}
