#include <iostream>
using namespace std;

int main(void)
{
    int r1,r2, c1,c2, a[4][3], b[4][3], sum[4][3], i, j;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < 4; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < 4; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices

    for(i = 0; i < 4; ++i)
        for(j = 0; j < 3; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout<<"Printing a 2D matrix1:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}

    cout<<"Printing a 2D matrix2:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}

    // Displaying the resultant sum matrix.
    cout << "Sum of two matrix is: " << endl;
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == 3 - 1)
                cout << endl;
        }

    return 0;
}
