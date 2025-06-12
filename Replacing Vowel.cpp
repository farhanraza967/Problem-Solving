#include <iostream>
using namespace std;
int main(){
  
  string my_string;
getline(cin, my_string);
  char ch;
for (int i = 0; i < my_string.length(); i++) {
    ch = my_string[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      my_string[i] = '*';
    }
  }

  cout << my_string << endl;
  return 0;
  
}
