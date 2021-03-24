#include <stdio.h>
#include <limits.h>
#include <math.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 100)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}