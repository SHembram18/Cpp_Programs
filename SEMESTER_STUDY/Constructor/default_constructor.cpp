//EXAMPLE THAT ILLUSTRATE THE BEHAVIOUR OF DEFAULT CONSTRUCTOR

	#include<iostream>
	using namespace std;
	class A
	{
		int a,b;
		public:

	//NO CONSTUCTOR HERE COMPILER SUPPLIRES DEFAULT CONSTRUCTOR. SO GARBAGE WILL BE STORED
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
