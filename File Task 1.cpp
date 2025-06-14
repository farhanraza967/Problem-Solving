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
  
  //add code below this line


  ifstream file(path);
  if (!file) {
    cerr << "Error: Unable to open file." << endl;
    return 1;
  }

  int lineCount = 0;
  int charCount = 0;
  string line;

  while (getline(file, line)) {
    lineCount++;
    charCount += line.length();
  }

  cout << lineCount << " line(s)" << endl;
  cout << charCount << " character(s)" << endl;
  //add code above this line
  
  return 0;
  
}
