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
class cube:public rectangle
{
	private:
		double height;
	public:
		double volume();
	cube()
	{
		cout<<"Enter height: "<<endl;
		cin>>height;
	}
};
double rectangle::area()
{
	return width*length;
}
double cube::volume()
{
	return area()*height;
}
main()
{
	cube c1;
	cout<<c1.volume();
}
	

