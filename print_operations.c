#include "monty.h"

/**
 * monty_pstr - prints the string starting at the top of the stack,
 *  followed by a new line.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int value;

	(void)line_number;

	temp = *stack;
	while (temp != NULL)
	{
		value = temp->n;
		if (!isascii(value) || value == 0)
			break;
		putchar(value);
		temp = temp->next;
		if (temp == *stack)
			break;
	}
	putchar('\n');
}

/**
 * monty_pchar - computes the rest of the division of
 *  the second top element of the stackby the top element of the stack.
 *
 * @stack: Pointer to the begin of the stack
 * @line_number: Current file line number of the opcode being executed
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}

/**
 * _pall - Print all elements of the stack
 *
 * @stack: Pointer to the first node of the stack
 * @line_number: Current line being executed
 */

void _pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *head;

	head = *stack;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}


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
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
