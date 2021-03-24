#include <stdio.h>

int ft_fibonacci(int index)
{
    
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 30)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}