//EXAMPLE OF CONSTRUCTOR
	
	#include<iostream>
	using namespace std;
	class A
	{
		int a,b;
		public:
		
		//HERE CONSTRUCTOR IS DEFINE

		A()
		{
			a = 45;
			b = 65;
		}
		void show()
		{
			cout<<"a = "<<a<<"\nb = "<<b<<endl;
		}
	};

	int main()
	{
		A obj;
		obj.show();
		return 0;
	}
		
