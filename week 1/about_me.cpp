#include <iostream>
#include <string>
using namespace std;
int main() {
        // VARIABLE DECLARATION
    string name; //stores the users name(text)
    string course; //stores the course (BBIT or BCS)
    string hobby; //stores the hobby
    string reason; //stores why they chose the course
    string expectation; //stores what they expect to learn
    string definition; //stores the definition of a program

    cout << "WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << endl;
    //QUESTION 1: NAME
    cout << "What is your name? ";
    getline(cin, name);  
    //QUESTION 2: COURSE(BBIT or BCS)
    cout << "What course are you taking (BBIT or BCS)? ";
    getline(cin, course); 
    //QUESTION 3: HOBBY
    cout << "What is your hobby? ";
    getline(cin, hobby);  
    //QUESTION 4: REASON FOR CHOOSING COURSE
    cout << "Why did you choose this course? ";
    getline(cin, reason);
    //QUESTION 5: EXPECTATION
    cout << "What do you expect to learn in this program? ";
    getline(cin, expectation);
    //QUESTION 6: DEFINITION OF A PROGRAM
    cout << "In your own words, what is programming? ";
    getline(cin, definition); 
    //DISPLAY THE SUMMARY
    cout << endl;
    cout << " YOUR PROFILE SUMMARY" << endl;
    cout << "=========" << endl;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason: " << reason << endl;
    cout << "Expectation: " << expectation << endl;
    cout << "Definition of programming: " << definition << endl;
    cout<< endl;
    cout<<"==========="<<endl;
    cout<<"Thank you for completing this!"<<endl;
    cout<<"==========="<<endl;
    return 0;
}