#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	**str;

	str = (char **)malloc(4 * sizeof(str));
	str[0] = "Salut";
	str[1] = "comment";
	str[2] = "ca";
	str[3] = "va";
	char	separator[] = ", ";
	printf("%s", ft_strjoin(4, str, separator));
}
