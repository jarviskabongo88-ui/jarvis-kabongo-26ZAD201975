#include <stdio.h>

static char determine_grade(double score)
{
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    }
    return 'F';
}

static char determine_modifier(char grade, double score)
{
    if (grade == 'F') {
        return ' ';
    }
    const int last_digit = (int)score % 10;
    if (grade == 'A') {
        if (score >= 97) {
            return '+';
        }
        if (score < 93) {
            return '-';
        }
        return ' ';
    }
    if (last_digit >= 7) {
        return '+';
    }
    if (last_digit <= 3) {
        return '-';
    }
    return ' ';
}

int main(void)
{
    double score = 0.0;
    printf("==== GRADE CALCULATOR ====\n");
    printf("Enter the score (0-100): ");
    if (scanf("%lf", &score) != 1) {
        return 1;
    }
    if (score < 0 || score > 100) {
        puts("Invalid score! Must be between 0 and 100.");
        return 1;
    }

    const char grade = determine_grade(score);
    const char modifier = determine_modifier(grade, score);
    printf("\nScore: %.1f%%\n", score);
    printf("Grade: %c", grade);
    if (modifier != ' ') {
        printf("%c", modifier);
    }
    putchar('\n');
    return 0;
}
