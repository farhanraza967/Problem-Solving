#include <iostream>
using namespace std;
int main() {
  string= my_string;
  getline(cin, my_string);
  int length = my_string.length();
  int mid = length / 2;
  cout << my_string.substr(0, mid) << endl;
  cout << my_string.substr(mid) << endl;
  
  return 0;
  
}
