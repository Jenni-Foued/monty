#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the first node of the stack.
 * @line_number: Current file line number.
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (head == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
