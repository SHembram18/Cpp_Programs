/*
 * PROGRAM:To define a book class & count how many books having page more than 500
 * FILE:book_class.cpp
 * CREATED BY:Santosh Hembram
 * DATED:25/02/2020
 */
	#include<iostream>
	using namespace std;
	class book
	{
		char book_name[50];
		char author_name[26];
		int pub;
		int page;
		static int count;
		public:
		void get_data();
		void show_data();
		int count_page();
	};
	void book :: get_data()
	{
		cout<<"Enter book name:-";
		cin.ignore();
		cin.getline(book_name,50);
		cout<<"Enter author name:-";
		cin.getline(author_name,26);
		cout<<"Enter publication:-";
		cin>>pub;
		cout<<"Enter total page of the book:-";
		cin>>page;
	}
	void book :: show_data()
	{
		cout<<"Book name:- "<<book_name<<endl;
		cout<<"Author name:- "<<author_name<<endl;
		cout<<"Publication:- "<<pub<<endl;
		cout<<"Pages:- "<<page<<endl;
	}
	int book :: count_page()
	{
		if( page > 500 )
			count++;

		return count;
	}
	int book :: count;
	int main()
	{
		book b[50];int i,n,x;

		cout<<"Enter total no. of book:-";
		cin>>n;
	
		cout<<"---Enter book details---"<<endl;
		for(i=0;i<n;i++)
			b[i].get_data();
		cout<<"***Displaying book details***"<<endl;
		for(i=0;i<n;i++)
			b[i].show_data();
		for(i=0;i<n;i++)
		x = b[i].count_page();
		cout<<"The books having more than page 500 = "<<x<<endl;
		return 0;
	}

		
	
		
