#include<iostream> 
using namespace std; 
int main(){ 
double balance, rate; 
int years, count; 
cout<<"What is the starting balance : "; 
cin>>balance; 
cout<<"What is the annual interest rate : "; 
cin>>rate; 
cout<<"How many years to calculate interest : "; 
cin>>years; 
count = 1; 
while(count <= years) 
{ 
balance *= rate; 
++count; 
} 
cout<<"After "<<years<<" years, balance will be " 
<<balance<<endl; 
return 0; 
} 
