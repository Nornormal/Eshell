#include "shell.h"

/**
 * execmd - function that execute the input command
 * @argv: array of arguments
 *
 * Return: void
 */
void execmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		if (argv)
		{
			command = argv[0];
			actual_command = get_location(command);

			if (execve(actual_command, argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
