#include <iostream>
using namespace std;
int main(){
  string original;
getline(cin, original);
  string modified;
  char ch;
for (int i = 0; i < original.length(); i++) {
    ch = original[i];
    if (isupper(ch)) {
      modified += 'u';
    }
    else if (islower(ch)) {
      modified += 'l';
    } 
      else {
      modified += '-';
    }
  }
  cout << original << endl;
  cout << modified << endl;
  return 0;
}
