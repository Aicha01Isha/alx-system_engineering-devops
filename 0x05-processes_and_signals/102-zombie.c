#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - used when done creating the parent process
 * Return: 0 on success
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - entry point for program
 * Description - parameter
 * Return: 0 on success
 */

int main(void)
{
	int a, pid;

	for (a = 0; a < 5; a++)
	{
		pid = fork();

		if (pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}
	infinite_while();
	return (0);
}
