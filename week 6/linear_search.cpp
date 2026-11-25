#include <iostream>
using namespace std;
int linearsearch(int arr[],int size, int target){
    for(int i = 0; i < size;i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
int numbers [8] = {15, 42, 7, 89, 23, 56, 11, 74};
int size = sizeof(numbers)/ sizeof(numbers[0]);
int target;
 cout << "array contents:";
cout << endl;
cout << "enter a number to search:";
cin >> target;
int position = linearsearch(numbers, size, target);
if (position != -1){
    cout <<"enlement found at index:" << position <<endl;
}else{
    cout <<"elemant not found in array." << endl;
}
return 0;
}

