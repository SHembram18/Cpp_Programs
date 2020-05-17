//Example of the parameterised constructor

	#include<iostream>
	using namespace std;
	class BOX
	{
		double length,breadth,height;
		public:
			BOX(double,double,double);
			void showvol();
	};
	BOX :: BOX(double l,double b,double h)
	{
		length = l; breadth = b; height = h;
	}
	void BOX :: showvol()
	{
		cout<<"volume of the box: "<<length*breadth*height<<endl;

	}
	int main()
	{
		BOX B1(5,4,5);
		BOX B2(5,10,10);
		B1.showvol();
		B2.showvol();
	}

		
