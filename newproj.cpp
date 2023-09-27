#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	try
	{
		if(b == 0)
		throw("division by zero is not possible");
		a/b;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
}
