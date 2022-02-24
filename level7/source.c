//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>

char c[68];

struct foo {
  int num;
  char *str;
};

void	m()
{
	time_t seconds;

	seconds = time(NULL);
	printf("%s - %d\n", c, seconds);
}

void	main(int ac, char **av)
{
	struct foo *s1, *s2;

  	s1 = malloc(sizeof(struct foo));
  	s1->num = 1;
  	s1->str = malloc(8);

  	s2 = malloc(sizeof(struct foo));
  	s2->num = 2;
  	s2->str = malloc(8);

    	strcpy(s1->str, av[1]);
  	strcpy(s2->str, av[2]);
	fgets(c,68,fopen("/home/user/level8/.pass", "r"));
	puts("~~");
}