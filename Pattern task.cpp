#include <iostream>
using namespace std;
int main(){

  string my_string;
getline(cin, my_string);
 int length = my_string.length();

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << my_string;
    }
    cout << endl;
  }
  
  return 0;
  
}
