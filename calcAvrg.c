#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calc_average - calculates the average
 * @head: pointer to the marks lists
 * Return: average of marks
 */

float calc_average(Marks *head)
{
    float avgr = 0, sum_marks = 0, sum_coef = 0;
    Marks *ptr = head;
    while (ptr != NULL)
    {
        sum_marks += (ptr->mark) * (ptr->coef);
        sum_coef += ptr->coef;
        ptr = ptr->next_mark;
    }
    avgr = (float)(sum_marks / sum_coef);
    return avgr;
}