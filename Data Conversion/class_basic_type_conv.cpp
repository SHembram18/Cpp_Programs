// Class type to Basic type conversion

	#include<iostream>
	using namespace std;

	class Dollar;
	class Rupee
		{
			float amt;

			public:
				Rupee();
				Rupee(Dollar &);

			void input();
			void show();
			friend class Dollar;
		};

	class Dollar
		{
			float amt;
			public:
			Dollar();
			Dollar(Rupee &);
		void input();
		void show();
		friend class Rupee;
		};

	Rupee :: Rupee()
		{
			amt = 0.0;
		}

	Rupee :: Rupee(Dollar &D)
		{
			amt = D.amt * 70;
		}
	
	void Rupee :: input()
		{
			cout<<"Amount in Rupee:";
			cin>>amt;
		}
	
	void Rupee :: show()
		{
			cout<<"Amount in Rs:"<<amt<<endl;
		}

	Dollar :: Dollar()
		{
			amt = 0.0;
		}

	Dollar :: Dollar(Rupee &R)
		{
			amt = R.amt/70;
		}
	
	void Dollar :: input()
		{
			cout<<"Enter amount in Dollar\n";
			cin>>amt;
		}
	
	void Dollar :: show()
		{
			cout<<"Amount in Dollar:"<<amt<<endl;
		}
	
	int main()
	{		
		Rupee R;
		Dollar D;
	
		R.input();

		D = R;
		D.show();

		D.input();
		R = D;
		R.show();
	
		return 0;
	}
	
			
	
			
	
