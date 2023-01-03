#include "monty.h"

/**
 * _pchar - function thst prints char on top of stack
 * @head: pointer to head of stack
 * @counter: line counter
 *
 * Return: nothing
 */
void _pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
	{
		fprintf(stderr, "L%d: cant pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
