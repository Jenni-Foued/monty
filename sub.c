#include "monty.h"

/**
 * sub- subtracts the top element of the stack from 
   the second top element of the stack
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if ((*stack)->next == NULL || !(*stack) || !stack)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n -= n;
}
