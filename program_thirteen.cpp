#include <iostream>
using namespace std;
int main(void) 
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int sum = 0;
    int num = n;

   
    while (num != 0) //continues operation until last bit of the digit
    {
        int digit = num & 1; // Extract the last bit using bitwise AND
        sum += digit;
        num >>= 1; // Shift the number to the right by one position
    }

    cout<< "Sum of binary digits: " << sum <<endl;

    return 0;
}
