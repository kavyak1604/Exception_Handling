#include <iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter your age:-";
	cin>>age;
	try{
		if(age<18)
		{
			throw("you are not authorised to create the account");
		}
		cout<<"you are authorised to create the account"<<endl;
	}
	catch(const char*msg)
	{
		cout<<msg;
	}
}
/*enter your age:-18
you are authorised to create the account
/*enter your age:-16
you are not authorised to create the account
