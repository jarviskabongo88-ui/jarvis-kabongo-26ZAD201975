#include <iostream>
using namespace std;
int main(){
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    bool hasparent;
    //user input
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;
    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;
    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;
    cout << "do you have a parent(1 for yes, 0 for no): ";
    cin >> hasparent;
    bool canEnter=(age >= 18 && hasTicket && !isBanned) || (isMember && !isBanned) || (age >= 16 && hasparent);
    if (canEnter) {
        cout << "You can enter the event." << endl;
    } else {
        cout << "sorry, You cannot enter." << endl;
    }
    
}