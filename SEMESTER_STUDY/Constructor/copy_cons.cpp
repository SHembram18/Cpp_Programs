//COPY CONSTRUCTOR

	#include<iostream>
	using namespace std;
	
	class A
	{
		int x,y;
		public:
		A(int p,int q)
		{
			x = p;
			y = q;
		}
		A(A &obj)
		{
			x = obj.x;
			y = obj.y;
		}
		void show()
		{
			cout<<"x = "<<x<<"\ny= "<<y<<endl;
		}
	};
		int main()
		{
			A obj1(75,85);
			A obj2 = obj1;

			obj1.show();
			obj2.show();
		
			return 0;
		}
