#include "monty.h"

/**
 * main - Monty bytecode interpreter
 * @argc: Arguments count.
 * @argv: Arguments vector.
 *
 * Return: EXIT_SUCCESS if success or EXIT_FAILURE if failure
 */

int main(int argc, char **argv)
{
	FILE *fd = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 1;
	char *lineptr = NULL, *op_code = NULL;
	size_t n = 0;

	/* Verify the right usage of the program */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/* Open file */
	fd = fopen(argv[1], "r");
	/* Check if the file is open */
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	on_exit(free_lineptr, &lineptr);
	on_exit(free_stack, &stack);
	on_exit(file_close, fd);
	/* Interpret file line by line */
	while (getline(&lineptr, &n, fd) != -1)
	{
		op_code = strtok(lineptr, "\n\t\r ");
		if (op_code != NULL && op_code[0] != '#')
		{
			get_func(op_code, &stack, line_number);
		}
		line_number++;
	}
	exit(EXIT_SUCCESS);
}
