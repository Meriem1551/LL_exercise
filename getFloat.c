#include "main.h"
#include <stdio.h>

/**
 * getFloat - reads float from user and returns it
 * @s: the message will be displayed to the user
 * Return: float
 */

float getFloat(char *s)
{
    float input;
    puts(s);
    scanf("%f", &input);
    return input;
}
