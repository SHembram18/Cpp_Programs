/*
 * PROGRAM:Make a student class define an array of student object & get information,show data,show grade 
 * FILE:student_data.cpp
 * CREATED BY:Santosh Hembram
 * DATED:20/02/2020
 */
	#include<iostream>
	using namespace std;
	class student
	{
		char name[26];
		int roll_no;float total,score;
		float per;
		public:
		void getinfo();
		void showinfo();
		void grade();
	};
	void student :: getinfo()
	{
		cout<<"Enter student name:-";
		cin.ignore();
		cin.getline(name,26);
		cout<<"Enter roll no:-";
		cin>>roll_no;
		cout<<"Enter total mark:-";
		cin>>total;
		cout<<"Enter score:-";
		cin>>score;
	
		
		
	}
	void student :: showinfo()
	{
		cout<<"Student_name:-"<<name<<endl;
		cout<<"Roll_no:-"<<roll_no<<endl;
		cout<<"Total_mark:-"<<total<<endl;	
		cout<<"Score:-"<<score<<endl; 
		
	}
	void student :: grade()
	{
		per=((score/total)*100);
		if(per >= 60)
			cout<<"Grade = A"<<endl;
		else if(per >= 50 && per < 60 )
			cout<<"Grade = B"<<endl;
		else if(per >=30 && per <50)
			cout<<"Grade = C"<<endl;
		else if(per < 30)
			cout<<"Grade = F"<<endl;	
	}
	int main()
	{
		student s[100];int n,i;

		cout<<"Enter total number of student-[max-100]:-"<<endl;
		cin>>n;

		cout<<"---Enter the student data---"<<endl;
		for(i=0;i<n;i++)
			s[i].getinfo();

		cout<<"-----Displaying the student data-----"<<endl;
		for(i=0;i<n;i++)
		{
			s[i].showinfo();
			s[i].grade();
		}
		

		return 0;
	}
