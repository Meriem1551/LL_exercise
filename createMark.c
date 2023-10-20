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
    p_m->mark = getFloat("Enter the mark");
    p_m->coef = getInt("Enter its coefficient");
    p_m->next_note = NULL;
    head = p_m;
    ptr = head;
    while (i < n - 1)
    {
        p_m = (Marks *)malloc(sizeof(Marks));
        p_m->mark = getFloat("Enter the mark");
        p_m->coef = getInt("Enter its coefficient");
        p_m->next_note = NULL;
        ptr->next_note = p_m;
        ptr = ptr->next_note;
        i++;
    }
    free(p_m);
    free(ptr);
    return head;
}