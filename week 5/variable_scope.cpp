#include <iostream>
using namespace std;
int globalcounter = 100;

void displayGlobal() {
    cout << "inside displayglobal:global counter = " << globalcounter << endl;
}

void modifyGlobal() {
    globalcounter = 500;
    cout << "inside modifyglobal:global counter = " << globalcounter << endl;
}
void localDemo() {
    int globalcounter = 999;
    cout << "inside localDemo:global counter = " << globalcounter << endl;
}
int main() {
    int localcounter = 50;
    cout << "in main:local counter = " << localcounter << endl;
    cout << "in main:global counter = " << globalcounter << endl;
    displayGlobal();
    modifyGlobal();
    localDemo();    
    cout << "back in main:global counter = " << globalcounter << endl;
    return 0;
}