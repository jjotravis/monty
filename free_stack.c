#include "monty.h"

/**
 * free_stack - funtion that free a duobly linkrd list
 * @head: pointer to list
 *
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
