#include <iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	try{
		if(age<18)
		{
			try{
				if(age>=16 &&age<=18)
				{throw(age);
				}
			}
			catch(int age)
		{cout<<age<<endl;
		}
			throw("you are not authorised to create the account");
		}
		cout<<"you are authorised to create the account"<<endl;
	}
	catch(const char*msg )
	{
		
		cout<<msg<<endl;
	}
}
/*enter your age:19
you are authorised to create the account
/*enter your age:16
16

