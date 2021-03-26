#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 500)
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