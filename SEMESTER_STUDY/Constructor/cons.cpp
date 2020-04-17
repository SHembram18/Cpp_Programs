//CONSTRUCTOR HAVING DEFAULT ARGUMENT

	#include<iostream>
	using namespace std;
		
	class Triangle
	{
		double base,height;
		public:

		Triangle(double b = 10,double h = 5)
		{
			base = b;
			height = h;
		}
		void showArea()
		{
			cout<<"Area of triangle "<<.5*base*height<<endl;
		}
	};
	int main()
	{
		Triangle T1;
		Triangle T2(2);
		Triangle T3(4,7);

		T1.showArea();
		T2.showArea();
		T3.showArea();

		return 0;
	}
