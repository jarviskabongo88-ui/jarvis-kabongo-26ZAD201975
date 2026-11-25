#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //VARIABLE DECLARATION
    string studentName;
    string course;

    int score1, score2, score3;
    int totalScore;

    double average;
    double percentage;

    //==========================//
    //CONSTSANT DECLARATION
    //==========================//
    const int MAX_SCORE = 100;

    cout << "=======================================" << endl;
    cout << "STUDENT SCORE CALCULATOR" << endl;
    cout << "---------------------------------------" << endl;
    cout << endl;

    cout << "1. Enter student name: ";
    getline(cin, studentName);
cout << endl;

    cout << "2. Enter course: ";
    getline(cin, course);
cout << endl;

    cout << "3. Enter score 1: ";
    cin >> score1;
    while (score1 < 0 || score1 > MAX_SCORE) {
        cout << "Invalid score. Please enter a score between 0 and " << MAX_SCORE << ": ";
        cout <<endl;
        cout << " Enter score 1 again: ";
        cin >> score1;
    }
cout << endl;

    cout << "4. Enter score 2: ";
    cin >> score2;
    while (score2 < 0 || score2 > MAX_SCORE) {
        cout << "Invalid score. Please enter a score between 0 and " << MAX_SCORE << ": ";
        cout <<endl;
        cout << "4. Enter score 2 again: ";
        cin >> score2;
    }
cout << endl;

    cout << "5. Enter score 3: ";
    cin >> score3;
    while (score3 < 0 || score3 > MAX_SCORE) {
        cout << "Invalid score. Please enter a score between 0 and " << MAX_SCORE << ": ";
        cout <<endl;
        cout << "5. Enter score 3 again: ";
        cin >> score3;
    }
cout << endl;

    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (average / MAX_SCORE) * 100.0;
    
    cout<<endl;
    cout << "=======================================" << endl;
    cout << "REPORT CARD" << endl;
    cout << "=======================================" << endl;

    cout << "Student Name: " << studentName << endl;
    cout << "Course: " << course << endl;
    cout <<endl;
    cout << "Test 1: " << score1 << endl;
    cout << "Test 2: " << score2 << endl;  
    cout << "Test 3: " << score3 << endl;
    cout <<endl;
    cout << "Total Score: " << totalScore<<"/300" << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout <<endl;
  if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}
