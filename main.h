#ifndef MAIN_H
#define MAIN_H

/*STRUCTURES*/
/**
 * Marks - a struct contains student's marks
 * @mark: student's mark
 * @coef: the module's coefficient
 */
typedef struct Marks Marks;
struct Marks
{
    float mark;
    int coef;
    struct Marks *next_note;
};

/**
 * Student - a struct contains student's infos
 * @id: his id
 * @first_name: pointer to a string(his first name)
 * @last_name: pointer to a string(his last name)
 * @average: his general average
 */

typedef struct Student Student;
struct Student
{
    int id;
    char *first_name;
    char *last_name;
    float average;
    Marks *mark;
    struct Student *next_student;
};

/*FUNCTIONS*/

Student *create_first_student_node();
Student *add_student_nodes();
Marks *create_note_list();
float calc_average();
int getInt(char *s);
char *getChar(char *s);
float getFloat(char *s);

#endif