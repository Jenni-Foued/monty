#include "monty.h"

/**
 * add_to_stack - Adds a new node at to the stack.
 *
 * @head: Pointer to the first node of the stack.
 * @number: Element to add.
 *
 * Return: void.
 */

void add_to_stack(stack_t **head, const int number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;
	new_node->n = number;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	new_node->next = *head;
	*head = new_node;
	new_node->next->prev = new_node;
}
