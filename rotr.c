#include "monty.h"

/**
 * monty_rotr - rotates the stack to the bottom.
 *
 * @stack: Pointer to the begin of the stack.
 * @line_number: Current file line number of the opcode being executed.
 */
void monty_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last_element, *first_element;

	(void)line_number;

	if (stack && (*stack) && (*stack)->next)
	{
		first_element = *stack;
		last_element = *stack;
		while (last_element->next)
		{
			last_element = last_element->next;
		}
		last_element->next = first_element;
		last_element->prev->next = NULL;
		first_element->prev = last_element;
		*stack = last_element;
		last_element->prev = NULL;
	}
}
