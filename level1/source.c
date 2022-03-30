#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void run (void)
{
	write(0, "Good...Wait what?\n", 19);
	system("/bin/sh");
}

int	main(void)
{
	char buf[50];
	gets(buf);
}
