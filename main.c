#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * Return: always 0;
 */

int main(void)
{
    int ID, num_nodes;
    char *fName, *lName;
    float Mark;
    Student *s, *h;
    s = (Student *)malloc(sizeof(Student));
    h = (Student *)malloc(sizeof(Student));
    if (s == NULL || h == NULL)
    {
        prinft("Allocation failed");
        return NULL;
    }
    ID = getInt("enter the ID");
    fName = getChar("Enter the first name");
    lName = getChar("Enter the last name");
    num_nodes = getInt("How many students do you have");
    s = create_first_student_node(ID, fName, lName);
    h = add_student_nodes(s, num_nodes);
}