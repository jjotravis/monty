#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for code
 * @argc: arguement count
 * @argv: arguements array
 * @Return: 0 on success
*/

int main(int argc, char **argv)
{
    FILE *file;
    char *content = NULL;
    size_t size = 0;
    ssize_t get_line = 1;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    /*global_t.file*/
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    }
    while (get_line > 0)
    {
        get_line = getline(&content, &size, file);
        printf("Here");
    }
    printf("Content: %s\n", content);
    return (0);
}