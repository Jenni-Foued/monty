#include "monty.h"

/**
 * stack_pall - Print all elements of a stack.
 *
 * @stack: Pointer to the first node of the stack.
 */

void stack_pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *head;

	head = *stack;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
