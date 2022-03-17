#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
        int count = atoi(argv[1]);

	if (count >= 10) {
		printf("count didn't pass constraint: < 10\n");
		return 1;
	}
	
	printf ("%d -> %d\n", count, count * sizeof(int));
        return 0;
}
