#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_student_nodes - add nodes to an exisitng list
 * @h: pointer to the first node
 * @n: number of nodes
 * Return: a pointer to the new list
 */
Student *add_student_nodes(Student *head, int n)
{
    int i = 0, num_marks;
    Student *p_s, *ptr = head;
    Marks *p_m;
    printf("HI THERE\n");
    while (i < n - 1)
    {
        p_s = (Student *)malloc(sizeof(Student));
        p_s->id = getInt("Enter the ID");
        p_s->first_name = getChar("Enter the first name");
        p_s->last_name = getChar("Enter the last name");
        num_marks = getInt("Enter how many marks does this student have");
        p_m = create_mark_list(num_marks);
        p_s->average = calc_average(p_m);
        p_s->mark = p_m;
        p_s->next_student = NULL;
        ptr->next_student = p_s;
        ptr = ptr->next_student;
        i++;
    }
    return head;
}