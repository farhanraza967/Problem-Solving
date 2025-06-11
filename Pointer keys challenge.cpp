#include <iostream>
using namespace std;
int main(){

  int age1 = 12;
  int age2 = 31;
  int age3 = 29;
  int* amy;
  int* bob;
  int** carol;
  
  amy= &age1;
  bob= &age2;
  *carol= &age3;

  cout<<"Amy's age is: ";
  cout << *amy << endl; 
  cout<<"Bob's age is: ";
  cout << *bob << endl; 
  cout<<"Carol's age is: ";
  cout << **carol << endl;
  
  return 0;
  
}
