//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	char	buf1[66];
	char 	buf2[65];
	FILE 	*file = fopen("/home/user/end/.pass", "r");

	bzero(buf1, 33);
	if (file == NULL)
		return (-1);
	if (ac != 2)
		return (-1);
	fread(buf1, 1, 66, file);
	int nb = atoi(av[1]);
	buf1[nb] = '\0';

	fread(buf2, 1, 65, file);
	
	fclose(file);
	if (strcmp(av[1], buf1) == 0)
	{
		execl("/bin/sh", "sh", NULL );
		return (0);
	}
	else
		puts((char *)(buf1 + 65));
		return (0);
	return (0);

}