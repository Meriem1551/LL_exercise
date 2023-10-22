#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_mark_list - func create a list of marks
 * @n: number of nodes
 * Return: a pointer
 */
Marks *create_mark_list(int n)
{
    int i = 0, coef;
    float mark;
    Marks *p_m = (Marks *)malloc(sizeof(Marks)), *head, *ptr;
    if (p_m == NULL)
    {
        printf("Allocation failed");
        return NULL;
    }
    do
    {
        p_m->mark = getFloat("Enter a valid mark");
    } while (p_m->mark < 0 || p_m->mark > 20);
    p_m->coef = getInt("Enter its coefficient");
    p_m->next_mark = NULL;
    head = p_m;
    ptr = head;
    while (i < n - 1)
    {
        p_m = (Marks *)malloc(sizeof(Marks));
        do
        {
            p_m->mark = getFloat("Enter a valid mark");
        } while (p_m->mark < 0 || p_m->mark > 20);
        p_m->coef = getInt("Enter its coefficient");
        p_m->next_mark = NULL;
        ptr->next_mark = p_m;
        ptr = ptr->next_mark;
        i++;
    }
    return head;
}