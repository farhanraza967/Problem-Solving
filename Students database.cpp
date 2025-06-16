#include <iostream>
#include <conio.h>  
#include <string>
using namespace std;
const int MAX = 25;
int main(){
    string names[MAX];
    int rollNos[MAX];
    float cgpas[MAX];
    int count = 0;
    char choice = 0;

    while (choice != 27){ 
        cout << "===== Student Database Menu =====" << endl;
        cout << "1. Enter Records" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Replace a Record" << endl;
        cout << "Press ESC to Exit" << endl;
        cout << "Choose an option: ";
        choice = getch(); 
        if (choice == '1') {
            if (count >= MAX){
                cout << "\nDatabase is full. Cannot add more students.\n";
            } 
            else{
                int n;
                cout << "\nHow many records you want to enter (max " << MAX - count << "): ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter data for student " << count + 1 << ":\n";
                    cout << "Name: ";
                    cin.ignore(); 
                    getline(cin, names[count]);
                    cout << "Roll No: ";
                    cin >> rollNos[count];
                    cout << "CGPA: ";
                    cin >> cgpas[count];
                    count++;
                }
            }
        }
         else if (choice == '2') {
            if (count == 0) {
                cout << "\nNo records to display.\n";
            } 
            else {
                cout << "\n=== Student Records ===\n";
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". Name: " << names[i]
                         << ", Roll No: " << rollNos[i]
                         << ", CGPA: " << cgpas[i] << endl;
                }
            }
        } 
        else if (choice == '3') {
            if (count == 0) {
                cout << "\nNo records to replace.\n";
            } 
            else {
                int index;
                cout << "\nEnter record number (1 to " << count << ") to replace: ";
                cin >> index;
                if (index < 1 || index > count) {
                    cout << "Invalid record number.\n";
                } 
                else {
                    index--; // convert to 0-based index
                    cout << "Enter new data for student " << index + 1 << ":\n";
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, names[index]);
                    cout << "Roll No: ";
                    cin >> rollNos[index];
                    cout << "CGPA: ";
                    cin >> cgpas[index];
                    cout << "Record updated successfully.\n";
                }
            }
        } 
        else if (choice != 27) {
            cout << "\nInvalid option. Please try again.\n";
        }

        if (choice != 27) {
            cout << "\nPress any key to return to menu...";
            getch();
        }
    }

    cout << "\nProgram exited. Goodbye!\n";
    return 0;
}
