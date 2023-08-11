#include <unistd.h>
#include <stdio.h>

int main()
{
	pid_t pid = getpid();
	printf("the process ID is: %d\n", pid);
	return (0);
}
