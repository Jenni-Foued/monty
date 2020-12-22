#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || !(*stack) || !stack)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->prev->n += (*stack)->n;
	pop(stack, line_number);
}
