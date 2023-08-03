#include <iostream>
using namespace std;
  
int main(void)
{
    // file pointer
    FILE* fptr;
  
    // creating file using fopen() access mode "w"
    fptr = fopen("file.txt", "w");
  
    // checking if the file is created
    if (fptr == NULL) {
        cout<<"The file is not opened. The program will "
               "exit now"<<endl;
        exit(0);
    }
    else {
        cout<<"The file is created Successfully."<<endl;
    }
    
    return 0;
}