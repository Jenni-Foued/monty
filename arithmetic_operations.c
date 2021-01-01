#include "monty.h"

/**
 * monty_div - divides the second top element of the stack
 * by the top element of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
	int n;

	if ((*stack)->next == NULL || !(*stack) || !stack)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n -= n;
}

/**
 * monty_sub - subtracts the top element of the stack from
 * the second top element of the stack
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_sub(stack_t **stack, unsigned int line_number)
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

/**
 * monty_add - Adds the top two elements of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed.
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
	int n;

	if (((*stack)->next == NULL) || !(*stack) || !stack)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n += n;
}
