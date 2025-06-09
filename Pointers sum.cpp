#include <iostream>
using namespace std;
int main(){
  
  double a;
  double b;
  double *p1;
  double *p2;
  
  cout << "Enter the first number: " << endl;
  cin >> a;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  cout << "Enter the second number: " << endl;
  cin >> b;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  p1= &a;
  p2= &b; 
  cout<< "The sum is ";
  
  cout << *p1 + *p2 << endl;
  
  return 0;
  
}
