#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
} Student;

static void student_init(Student *student, const char *name, int age)
{
    (void)snprintf(student->name, sizeof student->name, "%s", name);
    if (age > 0 && age < 120) {
        student->age = age;
    } else {
        puts("Error: Invalid age! Age must be between 1 and 119.");
        student->age = 0;
    }
}

static const char *student_get_name(const Student *student)
{
    return student->name;
}

static void student_set_age(Student *student, int new_age)
{
    if (new_age > 0 && new_age < 120) {
        student->age = new_age;
    } else {
        puts("Error: Invalid age! Age must be between 1 and 119.");
        student->age = 0;
    }
}

static int student_get_age(const Student *student)
{
    return student->age;
}

int main(void)
{
    Student s1;
    student_init(&s1, "Alice", 20);
    printf("Student Name: %s\n", student_get_name(&s1));
    printf("Student Age: %d\n", student_get_age(&s1));

    puts("\nAttempting to change age to 25...");
    student_set_age(&s1, 25);
    printf("New Age: %d\n", student_get_age(&s1));
    puts("\nAttempting to change age to -5...");
    student_set_age(&s1, -5);
    printf("Age after invalid attempt: %d\n", student_get_age(&s1));
    return 0;
}
