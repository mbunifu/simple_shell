#include <stdio.h>

int main(int ac, char *av[])
{
	int i = 0;
	(void)ac;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
