#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_first_student_node - create the first node of the student list
 * Return: a pointer to the first node
 */

Student *create_first_student_node(int id, char *firstName, char *lastName)
{
    Student *s_head;
    Student *p_s = (Student *)malloc(sizeof(Student));
    Marks *p_m = (Marks *)malloc(sizeof(Marks));
    if (p_s == NULL || p_m == NULL)
    {
        printf("Allocation failed");
        return NULL;
    }
    p_s->id = id;
    p_s->first_name = firstName;
    p_s->last_name = lastName;
    p_m = create_mark_list();
    p_s->average = calc_average(p_m);
    p_s->mark = p_m;
    p_s->next_student = NULL;
    free(p_m);
    s_head = p_s;

    return s_head;
}