#include <iostream>
using namespace std;
int main(){
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "row-major traversal (row by row):" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    cout << "\nmemory address(each int takes 4 bytes):" << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << "matrix[" << row << "][" << col << "] = " << &matrix[row][col] << endl;
    cout << "at address: " << &matrix[row][col] << endl;
        }
    }
    cout << "\nobservation: addresses increase row by row." << endl;
    cout << "row 0 is stored completely then row 1, then row 2." << endl;
    cout << "this is called ROW-MAJOR ORDER." << endl;
    return 0;
}