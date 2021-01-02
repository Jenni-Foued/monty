#include "monty.h"

/**
 * get_func - Find the coresponding function to the opcode and execute it.
 *
 * @op_code: Opcode to check and execute.
 * @stack: Pointer to the begin of the stack.
 * @line_number: Current line number being interpreted.
 *
 * Return: void
 */
void get_func(char *op_code, stack_t **stack, unsigned int line_number)
{
	unsigned int i;
	functions_t functions[] = {
		{"push", stack_push},
		{"pall", _pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", monty_add},
		{"nop", nop},
		{"sub", monty_sub},
		{"div", monty_div},
		{"mul", monty_mul},
		{"mod", monty_mod},
		{"pchar", monty_pchar},
		{"pstr", monty_pstr},
		{"rotl", monty_rotl},
		{"rotr", monty_rotr},
		{NULL, NULL}
	};

	/* Iterate through functions */
	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(functions[i].opcode, op_code) == 0)
		{
			functions[i].f(stack, line_number);
			return;
		}
	}
	/* In case function not found */
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op_code);
	exit(EXIT_FAILURE);
}
