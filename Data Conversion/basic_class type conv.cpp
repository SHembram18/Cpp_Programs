//Basic type to Class type conversion

	#include<iostream>
	using namespace std;
	
	class Meter
	    {
		float length;
		public:
			Meter()
			{
				length = 0.0;
			}
			Meter(float lincm)
			{
				length = lincm/100;
			}
		void input()
			{
			cout<<"Enter length in meter\n";
			cin>>length;
			}
		void show()
			{
			cout<<"Length in meter:"<<length<<endl;
			}
		operator float()
			{
				float l;
				l = length*100;
				return l;
			}
	     };
	int main()
	  {
		float lincm;

		Meter M;
		cout<<"Enter length in cm\n";
		cin>>lincm;
		M = lincm; // One argument Conversion
		M.show();
		M.input();
		lincm = M;
		cout<<"After conversion length in cm:"<<lincm<<endl;
i		
		return 0;
	 }

		
		
				
