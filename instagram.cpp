#include <iostream>
using namespace std;
main()
{
	int age;
	cout<<"Enter age: "<<endl;
	cin>>age;
	try
	{
		if(age<=15)
		{
			throw("Under Age");
		}
		else if(age>15 && age<18)
		{
			throw(18-age)
			cout<<"Account can be created"<<endl;
		}
		else
		{
			throw("Eligible");
		}
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	catch(int *a)
	{
		cout<<"Account can be created after"<<a<<"years"<<endl;
	}
}

