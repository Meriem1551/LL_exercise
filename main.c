#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * Return: always 0;
 */

int main(void)
{
    Student *s;
    Marks *m;
    s = (Student *)malloc(sizeof(Student));
    if (s == NULL)
    {
        prinft("Allocation failed");
        return NULL;
    }
    s = create_first_student_node();
}