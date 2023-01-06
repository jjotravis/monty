#include "monty.h"

/**
 * _push - functions that adds a node to a stack or queue
 * @head: pointer to head of stack
 * @counter: line counter
 *
 * Return: Nothing
 */
void _push(stack_t **head, unsigned int counter)
{
	int i, m = 0, flag = 0;

	if (bus.arg)
	{

		for(; bus.arg[m] != '\0'; m++)
		{
			if (!isdigit(bus.arg[m]) && bus.arg[m] != '-')
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}

/**
 * _pop - function that removes top element
 * @head: double pointer to head of stack
 * @counter: line  counter
 *
 * Return: Nothing
 */
void _pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
