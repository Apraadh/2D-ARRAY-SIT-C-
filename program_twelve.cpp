#include <iostream>
using namespace std;

int main(void) 
{

  int n, reversed_number, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n = n/10;
  }

  cout << "Reversed Number = " << reversed_number<<endl;

  return 0;
}