#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 *
 * @stack: Pointer to the begin of the stack.
 * @line_number: Current line number of the opcode being executed.
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->next)
	{
		temp->next->prev = NULL;
	}
	*stack = temp->next;
	free(temp);
}
