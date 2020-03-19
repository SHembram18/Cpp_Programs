/*
 * PROGRAM:To make an array class having methods implementing basic operations of an array[searching,sorting]
 * FILE:class_array.cpp
 * CREATED BY:Santosh Hembram
 * DATED:20/02/2020
 */
	#include<iostream>
	using namespace std;
	class operation
	{
		int arr[100],i,n;
		
		public:
		void getData();
		void showData();
		void searching();
		void sorting();
	};
	void operation :: getData()
	{
		cout<<"Enter the size of the array:[max size-100]:-"<<endl;
		cin>>n;
		cout<<"Enter number:-"<<endl;	
		for(i=0;i<n;i++)
			cin>>arr[i];	
	}
	void operation :: showData()
	{
		for(i=0;i<n;i++)
		cout<<"\t"<<arr[i]<<"\n";
	}	
	void operation :: searching()
	{
		int num,key;
		cout<<"Enter a number to search:-"<<endl;
		cin>>num;
		for(i=0;i<n;i++)
		{
			if(arr[i]==num)
				key=num;
		}
		if(key==num)
			cout<<"key element is found\n";
		else
			cout<<"key element is not found\n";		
		
	}
	void operation :: sorting()
	{
		int j,temp;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i] > arr[j])
				{
					temp=arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
		
			
	int main()
	{
		operation op;
			op.getData();
		cout<<"Showing the data of the array:-"<<endl;
			op.showData();

		op.searching();
		op.sorting();
		cout<<"after sorting:-"<<endl;
			op.showData();
		
		return 0;
	}
		
		
	
	
		
