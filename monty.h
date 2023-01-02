#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of stack or queue
 * @n: integer
 * @prev: points to previous element of a stack (or  queue)
 * @next: points to the next element of a stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stac <-> queue
 *
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void _add(stack_t **head, unsigned int counter);
void _sub(stack_t **head, unsigned int counter);
void _mul(stack_t **head, unsigned int counter);
void _div(stack_t **head, unsigned int counter);
void _mod(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void _push(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void _queue(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);

#endif
