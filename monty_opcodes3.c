#include "monty.h"

/**
 * _pint - function that prints the top element of a stack
 * @head: double pointer to head of stack
 * @counter: line count
 *
 * Return: Nothing
 */
void _pint(stack_t **head, unsigned int counter)
{
	(void)counter;
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * _pall - function that prints all elments in a stack
 * @head: double pointer to head of stack
 * @counter: unused line counter
 *
 * Return: Nothing
 */
void _pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
