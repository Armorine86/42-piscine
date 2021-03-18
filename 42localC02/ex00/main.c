#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[100]={};
	src = "Hello World!";
	strcpy(dest, src);
	printf("%s\n", src);
	printf("%s", dest);
	return (0);
}
