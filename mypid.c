#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the current and parent pid
 * Return: Always 0
 */
int main(void)
{
	pid_t first_pid;
	pid_t parent_pid;

	first_pid = getpid();
	parent_pid = getppid();
	printf("child Pid: %u\nparent_pid: %u\n", first_pid, parent_pid);
	return (0);
}
