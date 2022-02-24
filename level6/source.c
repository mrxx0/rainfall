//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void		m()
{
	puts("Nope");
}

void		main(int ac, char **av)
{
	char *str = (char *) malloc( 64 );
    	void (*fun_ptr)(void) = malloc( 4 );

	fun_ptr = &m;
	strcpy(str, av[1]);
	fun_ptr();
}