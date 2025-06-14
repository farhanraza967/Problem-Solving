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

  string line;
  vector<int> colSums(4, 0); // To store sum of each column
  int rowCount = 0;

  while (getline(file, line)) {
    stringstream ss(line);
    string value;
    int colIndex = 0;

    while (getline(ss, value, ',')) {
      if (colIndex < 4) {
        colSums[colIndex] += stoi(value);
        colIndex++;
      }
    }
    rowCount++;
  }

  for (int i = 0; i < 4; i++) {
    cout << (colSums[i] / rowCount) << " ";
  }
  cout << endl;


  //add code above this line
  
  return 0;
  
}
