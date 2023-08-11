#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("I was not there before fork\n");

	pid = fork();

	if (pid == -1)
	{
		perror("failed");
		return (1);
	}

	printf("After fork I was there\n");

	return (0);

}

