#include <iostream>
using namespace std;
int main(){
  
  string my_string;
getline(cin, my_string);

if (my_string.length() % 2 != 0) {
    cout << "Error: The string must have an even number of characters." << endl;
    return 1;
  }

  // Swap characters two at a time
  for (int i = 0; i < my_string.length(); i += 2) {
    // Swap i-th and (i+1)-th characters
    char temp = my_string[i];
    my_string[i] = my_string[i + 1];
    my_string[i + 1] = temp;
  }

  // Print the modified string
  cout << my_string << endl;
  return 0;
  
}
