#include<iostream>
using namespace std;

class rectangle
{
	private:
		double width;
		double length;
	public:
		double area();
rectangle()
{
	cout<<"Enter width: "<<endl;
	cin>>width;
	cout<<"Enter length: "<<endl;
	cin>>length;
}
};
double rectangle::area()
{
	return width*length;
}
main()
{
	rectangle r1;
	cout<<r1.area();
	
}
