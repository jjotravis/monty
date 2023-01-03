#include "monty.h"

/**
 * addnode - function that adds a node to the head of a stack
 * @head: pointer to head of stack
 * @n: value to be added
 *
 * Return: nothing
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = new_node;

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = NULL;
	*head = new_node;
}

/**
 * _stack - switch to stack
 * @head: double pointer to head of stack
 * @counter: line counter
 *
 * Return: nothing
 */
void _stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
