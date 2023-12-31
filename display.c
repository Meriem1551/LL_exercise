#include "main.h"
#include <stdio.h>

/**
 * gdisplay - print a list
 * @h: pointer to the printed  list
 * Return: void
 */

void display(Student *head)
{
    Student *p = head;
    int i = 1;
    if (head == NULL)
        printf("Error, allocation failed...");
    else
    {
        while (p != NULL)
        {
            printf("**** Informations for student %d are: \n", i);
            printf("id is: %d\n", p->id);
            printf("First name is: %s\n", p->first_name);
            printf("Last name is: %s\n", p->last_name);
            printf("Average is: %.2f\n", p->average);
            p = p->next_student;
            i++;
        }
    }
}
