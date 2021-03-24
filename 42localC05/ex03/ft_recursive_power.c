#include <stdio.h>

int recursive_power(int num, int power, int r)
{
    if (power-- > 0)
        return(recursive_power(num, power, r *= num));
    return (r);
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    return (recursive_power(nb, power, 1));
}

int	main(void)
{
	printf("10^2 = %d\n", ft_recursive_power(10, 2));
	printf("10^0 = %d\n", ft_recursive_power(10, 0));
	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("10^5 = %d\n", ft_recursive_power(10, 5));
}