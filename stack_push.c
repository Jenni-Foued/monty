#include "monty.h"

/**
 * stack_push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: Current file line number
 *
 * Return: void
 */
void stack_push(stack_t **stack, unsigned int line_number)
{
	char *value;
	int number, counter, checker = 0;

	value = strtok(NULL, "\n\t\r ");
	for (counter = 0; value[counter]; counter++)
	{
		if (value[counter] == '-' && counter == 0)
			continue;
		if (isdigit(value[counter]) == 0)
			checker = 1;
	}
	if (value == NULL || checker)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(value);
	add_to_stack(stack, number);
}
