#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  // Add code below this line
  ifstream file(path);
  if (!file) {
    cerr << "Error: Unable to open file." << endl;
    return 1;
  }

  string line;
  string oldestPerson;
  int maxAge = -1;

  while (getline(file, line)) {
    stringstream ss(line);
    string name, ageStr, occupation;

    getline(ss, name, '\t');
    getline(ss, ageStr, '\t');
    getline(ss, occupation, '\t');

    int age = stoi(ageStr);
    if (age > maxAge) {
      maxAge = age;
      oldestPerson = name;
    }
  }

  cout << "The oldest person is " << oldestPerson << "." << endl;

  // Add code above this line
  
  return 0;
}
