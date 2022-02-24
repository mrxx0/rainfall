//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	p(char *str, char *pr)
{
	char buf[4096];

	puts(pr);
	read(0, buf, 4096);
	
	if ((strchr(buf, '\n')) == NULL);
		return ;

	strncpy(str, buf, 20);
}

void		pp(char *str)
{
	char s1[40];
	char s2[40];

	s1 = p(s1, " - ");
	s2 = p(s2, " - ");
	strcpy(str, s1);
	int size = strlen(str);
	str[size] = ' ';
	strcat(str, s2);
}

int	main()
{
	char str[42];

	pp(str);
	puts(str);
	return (0);
}