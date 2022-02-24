//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		m;

void		v()
{
	char			str[512];

	fgets(str, 512, stdin);
	printf (str);
	if (m == 64)
	{
		fwrite("Wait what?!", 11, 1, stdout);
		system("/bin/sh");
	}
}

void		main()
{
	v();
}