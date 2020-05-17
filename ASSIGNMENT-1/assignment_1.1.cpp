/*
 * PROGRAM:To compute the volume of a box using inline function 
 * FILE:volume.cpp
 * CREATED BY:Santosh Hembram
 * DATED:18/02/2002
 */
	#include<iostream>
	using namespace std;
	inline int vol(int l,int b,int h)
	{
		int volume;
		 volume = (l*b*h);
		return volume;
	}
	int main()
	{
		int l,b,h,v;
		cout<<"Enter the length,breadth & height of a box respectievely:-"<<endl;
		cin>>l>>b>>h;
		v = vol(l,b,h);
		cout<<"The volume of the box is = "<<v<<endl;
		return 0;
	}
	
