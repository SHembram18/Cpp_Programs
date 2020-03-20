/*
 * PROGRAM:Create employee class having necessary employee information [id,bs,da,hra,gs].Create an array of employee object and estimate what % of employess are getting gross salary above 60,000.
 * FILE:employee_class.cpp
 * CREATED BY:Santosh Hembram
 * DATED:25/02/2020
 */
	#include<iostream>
	using namespace std;
	class employee
	{
		int eid;
		int b_sal,g_sal;
		int DA,HRA;
		char name[30];
		public:
			void get_info();
			void show_info();
			void calculating();
	};
	static float count ;
	
	void employee :: get_info()
	{
		cout<<"Enter name of the employee:- ";
		cin.ignore();
		cin.getline(name,30);
		
		cout<<"Enter employee id_no:- ";
		cin>>eid;

		cout<<"Enter Basic salary: ";
		cin>>b_sal;

		cout<<"Enter Dearness allowance: ";
		cin>>DA;

		cout<<"Enter House rent allowance: ";
		cin>>HRA;
	}
	void employee :: show_info()
	{
		cout<<"Employee name:- "<<name<<endl;
		cout<<"Employee id_no:- "<<eid<<endl;
		cout<<"Basic salary:- "<<b_sal<<endl;
		cout<<"Dearness allowance:- "<<DA<<endl;
		cout<<"House rent allowance:- "<<HRA<<endl;
	}
	void employee :: calculating()
	{
		g_sal = b_sal + DA + HRA;
		cout<<"Gross salary = "<<g_sal;

		if ( g_sal > 60000)
			count++;
		
	}
	int main()
	{
		employee e[100];
		int i,x;
		float per,n;
		
		cout<<"Enter total no. of employee:[max-100]:-";
		cin>>n;
		
		cout<<"---Enter data of the employee---"<<endl;
		for(i=0;i<n;i++)
			e[i].get_info();
		
		cout<<"***Display data of the employee***"<<endl;
		for(i=0;i<n;i++)	
		{
			e[i].show_info();
			 e[i].calculating();
		}
		per = ((count/n)*100);
		cout<<"The percentage of employee getting more than 60,000 = "<<per;
		return 0;	
	}
