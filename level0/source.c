#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int		main(int ac, char **av)
{
	if (atoi(av[1]) == 423)
	{
		char *str = NULL;
		str = strdup("/bin/sh");

		gid_t gid;
		uid_t uid;
		gid = getegid();
		uid = geteuid();

		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv(str, NULL);
	} else {
		fwrite("No !\n", 5, 1, stderr);
	}
	return (0);
}
