#include "main.h"
#include <stdio.h>

/**
 * getChar - reads input from user and returns it
 * @s: the message will be displayed to the user
 * Return: string
 */

char *getChar(char *s)
{
    char *input;
    puts(s);
    scanf("%s", &input);
    return input;
}