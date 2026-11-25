#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    cout << "inside function - before swap:a=" << a << ",b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "inside function - after swap:a =" << a << ",b =" << b << endl;
}

int main() {
    int x = 10;
    int y = 20;
    cout << "Before calling swapByValue:" << endl;
    cout << "x =" << x << ",y =" << y << endl;
    swapByValue(x, y);
    cout << "After calling swapByValue:" << endl;
    cout << "x =" << x << ",y =" << y << endl;
    return 0;
}
