#include "main.h"
#include <stdio.h>

/**
 * getInt - reads integer from user and returns it
 * @s: the message will be displayed to the user
 * Return: integer
 */

int getInt(char *s)
{
    int input;
    puts(s);
    scanf("%d", &input);
    return input;
}
