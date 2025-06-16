#include<iostream> 
#include<conio2.h> 
using namespace std; 
int main(){ 
    char guess; 
    cout<<"Press any key from keyboard :"; 
    cout<<"\n This program shall end only" 
        <<" when you press the secret key"; 
    guess=getche(); 
    while( guess!='x' ) 
    { 
        cout<<"\n Wrong input, try another key:"; 
        guess=getche(); 
    } 
    cout<<"\nYou have discovered it."; 
    getch(); 
    return 0; 
}
