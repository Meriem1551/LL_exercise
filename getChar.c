#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * getChar - reads string from user and returns it
 * @s: the message will be displayed to the user
 * Return: string
 */

char *getChar(char *s)
{
    char *input = malloc(100); // Allocate memory for input
    if (input == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    puts(s);
    scanf(" %99[^\n]", input); // Use "%99[^\n]" to read a whole line, excluding newline

    return input;
}