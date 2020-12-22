#include "monty.h"

/**
 * _pall - Print all elements of a stack.
 *
 * @stack: Pointer to the first node of the stack.
 * @line_number: Current line being executed.
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
