#include "monty.h"

/**
 * _queue - functions that prints top of queue
 * @head: pointer to head of queue
 * @counter: line counter
 *
 * Return: Nothing
 */
void _queue(stack_t **head, unsigned int counter)
{
	void(head);
	void(counter);
	bus.lifi = 1;
}

/**
 * addqueue - function that adds a node to the tail of a queue
 * @n: value to be added
 * @head: pointer to head of queue
 *
 * Return: nothing
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Error\n");
	new_node->n = n;
	new-node->next = NULL;

	if (temp == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}
