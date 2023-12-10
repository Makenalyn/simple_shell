#include "main.h"

/**
 * main :- Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	char *command = NULL;
	size_t len = 0;

	write(1, "$ ", 2);

	getline(&command, &len, stdin);

	free(command);
	return (0);
}
