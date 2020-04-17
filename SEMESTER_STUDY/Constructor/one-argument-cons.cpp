//ONE-ARGUMENT-CONSTRUCTOR

	#include<iostream>
	using namespace std;
	class A
	{
		int x;
		public:
		A(int p)
		{
			x = p;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
	};
	int main()
	{
		A obj1(35);
		A obj2 = 65;
		
		

		obj1.show();
		obj2.show();
		return 0;
	}

		
