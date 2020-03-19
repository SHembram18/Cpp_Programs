/*
 * PROGRAM:Create a number class.Define 3 objects of number class add,sub,mul. & divide 2 objects & store the results n 3rd
 * FILE:number_class.cpp
 * CREATED BY:Santosh Hembram
 * DATED:20/02/2020
 */
	#include<iostream>
	using namespace std;
	class number
	{
		int num;
		public:
			void getnum();
			void shownum();
		number	 addnum(number);
		number	 subnum(number);
		number	 mulnum(number);
		number	 divnum(number);
	};
	void number :: getnum()
	{
		cout<<"Enter the value:-";
		cin>>num;
	}
	void number :: shownum()
	{
		cout<<num<<endl;

	}
	number number :: addnum(number obj)
		{
			number temp;
			temp.num = num + obj.num;
			return temp;
			
		}
	number number :: subnum(number obj)
		{
			number temp;
			temp.num = num - obj.num;
			return temp;
		}
	number number :: mulnum(number obj)
		{
			number temp;
			temp.num = num * obj.num;
			return temp;
		}
	number number :: divnum(number obj)	
		{
			number temp;
			temp.num = num % obj.num;
			return temp;
		}
	int main()
	{
		number obj1,obj2,obj3;

		obj1.getnum();
		obj2.getnum();
		obj1.shownum();
		obj2.shownum();

		obj3 = obj1.addnum(obj2);
		cout<<"obj1+obj2= ";
		obj3.shownum();

		obj3 = obj1.subnum(obj2);
		cout<<"obj1-obj2= ";
		obj3.shownum();

		obj3 = obj1.mulnum(obj2);
		cout<<"obj1 * obj2 = ";
		obj3.shownum();

		obj3 = obj1.divnum(obj2);
		cout<<"obj1 / obj2 = ";
		obj3.shownum();
		
		return 0;
		 
	}
