#include <stdio.h>
#include <stdlib.h>

void n()
{
	char str[512];
	fgets(str, 512, stdin);
	printf(str);
	exit(1);
}

int main()
{
	n();
}