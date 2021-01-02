#include "monty.h"

/**
 * monty_rotl - rotates the stack to the top.
 *
 * @stack: Pointer to the begin of the stack.
 * @line_number: Current file line number of the opcode being executed.
 */
void monty_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last_element, *first_element;

	(void)line_number;

	if (*stack)
	{
		first_element = *stack;
		last_element = *stack;
		while (last_element->next)
		{
			last_element = last_element->next;
		}
		last_element->next = first_element;
		first_element->prev = last_element;
		*stack = first_element->next;
		first_element->next = NULL;
	}
}
