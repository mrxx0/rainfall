//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		m;

void		p(char *str)
{
	printf(str);
}

void		n()
{
	char			str[512];

	fgets(str, 512, stdin);
	p(str);
	if (m == 16930116)
	{
		system("/bin/cat /home/user/level5/.pass");
	}
}

void		main()
{
	n();
}