#include "monty.h"

/**
 * free_lineptr - Frees line pointer.
 *
 * @status: Exit status(unused)
 * @arg: Pointer to line
 */
void free_lineptr(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
