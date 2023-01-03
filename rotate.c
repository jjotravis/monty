#include "monty.h"

/**
 * _rotl - function that rotates element from top to bottom
 * @head: pointer to head of stack
 * @counter: line counter
 *
 * Return: Nothing
 */
void _rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
		return;

	aux = (*head)->next;
	aux-> prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = aux;
}

/**
 * _rotr - function that rotates element from bottom to top of stack
 * @head: double pointer to head of stack
 * @counter: line counter
 *
 * Return: Nothing
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *h = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;
	while (h)
		h = h->next;
	h->next = *head;
	h->prev->next = NULL;
	h->prev = NULL;
	(*head)->prev = h;
	(*head) = h;
}
