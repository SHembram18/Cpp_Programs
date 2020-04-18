//CREATING DYNAMIC OBJECT
	
	#include<iostream>
	using namespace std;

	class A
	{
		int x;
		public:
		void getdata()
		{
			cout<<"Enter x\n";
			cin>>x;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
	};
	int main()                               
	{
		A *ptr;  //class type pointer

		ptr = new A;   //Creating class type object dynamically
		ptr->getdata(); //recieving  data through dynamic object [ pointer to object ] 
		ptr->show();   //accessing member through pointer to object

		delete ptr;//Destroying the dynamic object

		ptr->show(); //checking the dynamic object is deleted or not..... [ if x = 0 dynamic object is deleted]

		return 0;
	}
	
