#include <iostream>
using namespace std;

int main(){
int myIntVar;
float myFloatVar;
char myCharVar;
string myStringVar;

cout<<"Enter Value: ";
cin>>myIntVar;
cout<<"Enter Value: ";
cin>>myFloatVar;
cout<<"Enter Value: ";
cin>>myCharVar;
cout<<"Enter Value: ";
cin>>myStringVar;

cout<<"The value of my integer variable is "<< myIntVar<<"."<<endl;
cout<<"The value of my float variable is "<< myFloatVar<<"."<<endl;
cout<<"The value of my character variable is "<< myCharVar<<"."<<endl;
cout<<"The value of my string variable is " << myStringVar<<"."<<endl;

cout<<"The size of my integer variable is "<< sizeof(myIntVar)<<"."<<endl;
cout<<"The size of my float variable is "<< sizeof(myFloatVar)<<"."<<endl;
cout<<"The size of my character variable is "<< sizeof(myCharVar)<<"."<<endl;
cout<<"The size of my string variable is " << sizeof(myStringVar)<<"."<<endl;
}