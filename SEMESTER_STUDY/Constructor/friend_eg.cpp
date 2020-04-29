//ADDITION USING FRIEND FUNCTION
//Passing arguments

	#include<iostream>
	using namespace std;
	
	class Sum
	{
		int a,b;

		public:
			void get_number();

			friend int add(); //friend function decalartion, It is a non-member function
	};
	void Sum :: get_number()
	{
		cout<<"Enter any two numbers: \n";
		cin >> a >> b;
	}
	int add() // function definition
	{
		Sum s;
		int temp;

		s.get_number();
		temp = s.a + s.b; //accesing private data (a and b)
		return temp;
	}
	int main()
	{
	 	int result;

 		//Function caling
		result = add();
		cout<<"SUM = "<<result<<endl;
		return 0;
	}
