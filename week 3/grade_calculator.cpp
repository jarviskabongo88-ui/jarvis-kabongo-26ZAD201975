#include <iomanip>
#include <iostream>
using namespace std;
char determineGrade(double score) {
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
char determineModifier(char grade, double score) {
    if (grade == 'F') {
        return ' ';
    }
    const int lastDigit = static_cast<int>(score) % 10;
    if (grade == 'A') {
        if (score >= 97) {
            return '+';
        }
        if (score < 93) {
            return '-';
        }
        return ' ';
    }
    if (lastDigit >= 7) {
        return '+';
    }
    if (lastDigit <= 3) {
        return '-';
    }
    return ' ';
}
int main() {
    double score = 0.0;
    cout << "==== GRADE CALCULATOR ====" << std::endl;
    cout << "Enter the score (0-100): ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Invalid score! Must be between 0 and 100." << endl;
        return 1;
    }
    const char grade = determineGrade(score);
    const char modifier = determineModifier(grade, score);
    cout << "\nScore: " << fixed << setprecision(1) << score << "%" << endl;
    cout << "Grade: " << grade;
    if (modifier != ' ') {
        cout << modifier;
    }
    cout << endl;
    return 0;
}