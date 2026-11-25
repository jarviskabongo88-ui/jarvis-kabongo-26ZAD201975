#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  if(a > b&& b > c)cout << "path 1" << endl;
  else if(a > b && a > c)cout << "path 2" << endl;
  else if(a > b)cout << "path 3" << endl;
  else if (a > c)cout << "path 4" << endl;
  else if (b > c)cout << "path 5" << endl;
  else cout << "path 6" << endl;
  return 0;
}    
