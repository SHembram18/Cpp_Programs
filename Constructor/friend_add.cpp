//friend function example of class_study
//Specifiying 3 classes A,B,C having private data members x,y,z respectievely add the values as x,y,and store the result in z

	#include<iostream>
	using namespace std;
	class B;class C;
	
	class A 
	{
		int x;
		public:
		A()
		{
			x=0;
		}
		A(int p)
		{
			x = p;
		}
		void show()
		{	
			cout<<"x = "<<x<<endl;
		}
		friend void sum(A& ,B& ,C&);
	};
	class B
	{
		int y;
		public:
		B()
		{
			y = 0;
		}
		B(int p)
		{
			y = p;
		}
		void show()
		{
			cout<<"y = "<<y<<endl;
		}			
		friend void sum(A& ,B& ,C&);
	};
	class C
	{
		int z;
		public:
		C()
		{
			z=0;
		}
		C(int p)
		{
			z = p;
		}
		void show()
		{
			cout<<"z = "<<z<<endl;
		}
		friend void sum(A&,B&,C&);
	};
	void sum(A&obj1,B&obj2,C&obj3)
	{
		obj3.z = obj1.x + obj2.y;
	}
		
	int main()
	{
		A obj1(65);
		B obj2(35);
		C obj3;
	
		obj1.show();
		obj2.show();
	
		sum(obj1,obj2,obj3);
		obj3.show();
		
		
		return 0;
	}

	
