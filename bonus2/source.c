//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int language = 0;

void		greetuser(char **av)
{
	char 	str[88];

	if (language == 1)
		strcpy(str, "Hyvää päivää ");
	if (language == 2)
		strcpy(str, "Goedemiddag! ");
	if (language == 0)
		strcpy(str, "Hello ");
	puts(strcat(str, av[1]));
	return ;
}

int		main(int ac, char **av)
{
	char	buf[80];
	char	*env;

	if (ac != 3) 
		return (1);
	bzero(buf, 19);
	strncpy(buf, av[1], 40);
	strncpy(&buf+40, av[2], 32);
	env = getenv("LANG");
	if (env)
	{
		
		if (!memcmp(env, "fi", 2))
			language = 1;
		if (!memcmp(env, "nl", 2))
			language = 2;
	}
	greetuser(av);
	return (0);
}