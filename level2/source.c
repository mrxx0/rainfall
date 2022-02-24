//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		p()
{
	char			str[64];
	unsigned int	ret;

	fflush(stdout);

	gets(str);

	ret = __builtin_return_address(0);

	if((ret & 0xb0000000) == 0xb0000000)
	{
		printf("%p", ret);
		exit(1);
	}
	puts(str);
	strdup(str);
}

void		main()
{
	p();
}