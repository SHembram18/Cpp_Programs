//FRIEND FUNCTION

	 #include<iostream>
	using namespace	std;
	
	class A
	{
		int x,y;
		public:
		void getdata();
		friend void show(A &);
	
	};			
	void A :: getdata()
	{
		cout<<"Enter x and y\n";
		cin>>x>>y;
	}
	void show(A &obj)
	{
		cout<<"x = "<<obj.x<<"\ny = "<<obj.y<<endl;
		
	}
	int main()
	{
		A obj1;
		obj1.getdata();
		show(obj1);
		return 0;

	}
