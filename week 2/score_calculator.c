#include <stdio.h>
#include <string.h>
// for the maximum length of words
#define MAX_LEN 100
// for the maximum score
#define MAX_SCORES 100
// starting point of the program
int main() {
    char student_name[MAX_LEN];
    char course [MAX_LEN];

    int score1, score2, score3;
    int totalscore;

double average;
double percentage;  
//display text to the user

    printf("========================\n");
    printf("student score calculator\n");
    printf("========================\n\n");
    //fgets reads full text
    printf("Enter your name: ");
    fgets(student_name, MAX_LEN, stdin);
    student_name[strcspn(student_name, "\n")] = '\0';
    printf("\n");
    printf("Enter the course(BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';
    printf("\n");
    // course scores
    printf("Enter score for test 1: ");
    scanf("%d", &score1);
    printf("\n");
    printf("Enter score for test 2: ");
    scanf("%d", &score2);
    printf("\n");
    printf("Enter score for test 3: ");
    scanf("%d", &score3);
    printf("\n");
    totalscore = score1 + score2 + score3;
    average = totalscore / 3.0;
    percentage = (totalscore / 300.0) * 100.0;
// output the results
printf("\n");
printf("========================\n");
printf(" REPORT CARD\n");
printf("========================\n");
printf("\n");
printf("Student Name: %s\n", student_name);
printf("Course: %s\n", course);
printf("\n");
printf("Test 1: %d\n", score1);
printf("\n");
printf("Test 2: %d\n", score2);
printf("\n");
printf("Test 3: %d\n", score3);
printf("Total Score: %d/300\n", totalscore);
printf("average: %.2f\n", average);
printf("Percentage: %.2f%%\n", percentage);
printf("========================\n");
//determine pass or fail using the if sttement
if (percentage >= 50.0) {
    printf("Result: PASS\n");
} else {
    printf("Result: FAIL\n");   
}
printf("========================\n");
    return 0;}