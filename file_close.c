#include "monty.h"

/**
 * file_close - Close file descriptor.
 *
 * @status: Exit status.
 * @arg: Pointer to the file descriptor.
 */
void file_close(int status, void *arg)
{
	FILE *fd;

	(void)status;

	fd = (FILE *) arg;
	fclose(fd);
}
