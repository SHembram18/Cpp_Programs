//CONSTRUCTOR OVERLOADING

	#include<iostream>
	using namespace std;

	class Triangle
	{
		double base,height;
		public:
		Triangle()
		{
			base = height = 5;
		}
		Triangle(double b)
		{
			base = b;
			height = 2*b;
		}
		Triangle(double b,double h)
		{
			base = b;
			height = h;
		}
		void showArea()
		{
			cout<<"Area of triangle: "<<.5*base*height<<endl;
		}
	};
	int main()
	{
		Triangle T1;
		Triangle T2(10);
		Triangle T3(20,6);

		T1.showArea();
		T2.showArea();
		T3.showArea();

		return 0;
	}
