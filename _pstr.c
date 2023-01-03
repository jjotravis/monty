#include "monty.h"

/**
 * _pstr - prints string on top of stack
 * @head: double pointer to head of stack
 * @counter: line counter
 *
 * Return: nothing
 */
void _pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
			break;
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
