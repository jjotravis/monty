#include "monty.h"

/**
 * -swap - function that swaps two top elements of stack
 *  @head: double pointer to head off stack
 *  @counter: line count
 *
 *  Return: nothing
 */
void _swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}

/**
 * _nop - function that does nothing
 * @head: double pointer to head of stack
 * @counter: line count
 *
 * Return: nothing
 */
void _nop(stack_t **head, unsigned int counter)
{
	(void)counter;
	(void)head;
}
