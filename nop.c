#include "monty.h"

/**
 * _nop -  Doesn’t do anything.
 * @stack: Pointer to the begin of the stack.
 * @line_number: Line number of the opcode in the file being executed.
 *
 */
void _nop(stack_t __attribute__((unused))**stack, unsigned int line_number)
{
	(void)line_number;
}
