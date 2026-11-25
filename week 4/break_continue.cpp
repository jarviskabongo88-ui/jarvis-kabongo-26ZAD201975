#include <iostream>
using namespace std;

int main() {
    cout << "number filter:skip multiple of 3. stop at 15"<< endl;
    for (int i = 1; i <= 20; i++) {
        if (i== 15) {
            cout << "break at " << i << "!" << endl;
            break; 
        }
        if (i % 3 == 0) {
            cout << "skip " << i << endl;
            continue; 
        } 
        cout << i << " ";
    }
    cout << endl;
    return 0;
}