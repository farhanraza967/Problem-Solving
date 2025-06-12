#include <iostream>
using namespace std;
int main() {
int lower_count = 0;
int upper_count = 0;
string my_string = "Roses are Red, Violets are Blue";
for (char ch : my_string)
if (islower(ch)) {
  lower_count += 1;
}
else if (isupper(ch)) {
  upper_count += 1;
}
cout << "There are " << lower_count << " lowercase characters." << endl;
cout << "There are " << upper_count << " uppercase characters." << endl;
  return 0;
  
}
