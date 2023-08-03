#include<iostream>
using namespace std; 
int main(void) 
{  
	int matrix[4][3] = {
		{8,  10, 11 },
		{60, 20, 21 },
		{50, 30, 31 },
		{19, 40, 41 }
		} ;
		

	cout<<"Printing a 2D matrix:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t"<<matrix[i][j];
		}
		cout<<endl;
	}
}