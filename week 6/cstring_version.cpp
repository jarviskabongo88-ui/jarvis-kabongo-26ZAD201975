#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[50];
    cout << "enter your name:";
    cin.getline(name,50); 

    cout << " name: " << name <<endl;
    cout << "lenght " << strlen(name) <<endl;
    cout << "first character:" << name[0] <<endl;

    char copy[50];
    strcpy(copy, name);
    cout << "copy:" << copy <<endl;
    return 0;

}