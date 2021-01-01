#include "monty.h"

/**
 * monty_mod - computes the rest of the division of the second top element of the stack
 *  by the top element of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_mod(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n %= n;
}

/**
 * monty_mul - multiplies the second top element of the stack
 *  with the top element of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n *= n;
}

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

	if (!stack || !(*stack) || (*stack)->next == NULL)
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
	(*stack)->n /= n;
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

	if (!stack || !(*stack) || (*stack)->next == NULL)
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

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n += n;
}
