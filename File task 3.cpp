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
  vector<string> southernCities;

  // Skip header line
  getline(file, line);

  while (getline(file, line)) {
    stringstream ss(line);
    string city, country, latitudeStr, longitudeStr;

    getline(ss, city, ',');
    getline(ss, country, ',');
    getline(ss, latitudeStr, ',');
    getline(ss, longitudeStr, ',');

    int latitude = stoi(latitudeStr);
    if (latitude < 0) {
      southernCities.push_back(city);
    }
  }

  cout << "The following cities are in the Southern Hemisphere: ";
  for (size_t i = 0; i < southernCities.size(); i++) {
    cout << southernCities[i];
    if (i != southernCities.size() - 1) cout << ", ";
  }
  cout << "." << endl;


  //add code above this line
  
  return 0;
  
}
