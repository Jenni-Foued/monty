#include "monty.h"

/**
 * free_stack - Frees the stack.
 * @status: Exit status(unused)
 * @arg: Pointer to the begin of the stack.
 *
 * Return: void
 */
void free_stack(int status, void *arg)
{
	stack_t **stack;
	stack_t *next;

	(void)status;
	stack = (stack_t **)arg;
	while (*stack != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
}
