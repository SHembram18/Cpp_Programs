//CREATE & DISPLAY DYNAMIC CONSTRUCTOR

	#include<iostream>
	using namespace std;
	
	class Array
	{
		int *x;
		int n;
		public :
		Array(int s=5 )
		{
			n = 5;
			x = new int[n];
		}
		void getArray();
		void showArray();
		
		~Array()
		{
			delete[]x;
		}
	};

	void Array :: getArray()
	{
		cout<<"Enter n elements of array \n";
		for(int i=0;i<n;++i)
		cin>>x[i];
	}

	void Array :: showArray()
	{
		cout<<"\nArray elements are:";
		for(int i=0;i<n;i++)
		cout<<x[i]<<" ";
		cout<<endl;	
	}

	int main()
	{
		Array obj(10);
		obj.getArray();
		obj.showArray();

	
		
		return 0;		
	}
