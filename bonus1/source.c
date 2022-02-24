//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	char tmp[42];
	int nb = atoi(av[1]);
	if (nb > 9)
		return (1);
	memcpy((void*)tmp, (void*)av[2], nb);
	if (nb == 1464814662) {
		execl("/bin/sh", "sh", NULL);
	}
	return (0);
}