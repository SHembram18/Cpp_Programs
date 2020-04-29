//EXAMPLE OF FRIEND FUNCTION
//Passing object

	#include<iostream>
	using namespace std;
	
	class Sum
	{
		int a,b;
		
		public:
			void get_number();
			friend int add(Sum s); //friend function declaration
	};

	void Sum :: get_number()
	{
		cout<<"Enter any two number: \n";
		cin>>a>>b;
	}

	//Friend function definition
	int add(Sum s) //storing the object
	{
		int temp;

		temp = s.a + s.b ;//accessing private data (a and b)
		return temp;
	}
	int main()
	{
		Sum z; // z object created
		
		int result;

		z.get_number();

		//friend function calling
		result = add(z); // passing the object

		cout<<"SUM = "<<result<<endl;
		return 0;
	}
		

 
