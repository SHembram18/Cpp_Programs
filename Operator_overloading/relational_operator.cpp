//Relational Operator Overloading
	#include<iostream>
	using namespace std;

	class A
	{
		int x,y;
		public:
		   void getdata();
		   void show();
		   int operator > (A&);
	};
	
	void A :: getdata()
	        {
			cout<<"Enter x and y\n";
			cin>>x>>y;
			
		}

	void A :: show()
	       {
		 cout<<"x = "<<x<<"y = "<<y<<endl;
	       }
	
	int A :: operator > (A &obj)
	       {
			if(x > obj.x && y > obj.y)
				return 1;
			else
				return 0;
		}

	int main()
	   {
		A obj1,obj2;

		obj1.getdata();
		obj2.getdata();

		if(obj1 > obj2)
			cout<<"obj1 > obj2";
		else
			cout<<"obj1 < obj2";
		return 0;
	   }
		 
