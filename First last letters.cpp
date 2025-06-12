#include <iostream>
using namespace std;
int main() {
  
  string my_string;
getline(cin, my_string);
char first_char = my_string[0];
  char last_char = my_string[my_string.length() - 1];

  cout << first_char << " is the first character and " << last_char << " is the last character" << endl;  
  return 0;
  
}
