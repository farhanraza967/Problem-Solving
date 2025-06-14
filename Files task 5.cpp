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

  vector<string> lines;
  string line;

  while (getline(file, line)) {
    lines.push_back(line);
  }

  for (int i = lines.size() - 1; i >= 0; i--) {
    cout << lines[i] << endl;
  }

  // Add code above this line
  
  return 0;
}
