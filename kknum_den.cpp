#include <iostream>
using namespace std;
main()
{ 
double numerator,denominator;
cout<<"enter the numerator:";
cin>>numerator;
cout<<"enter the denominator:";
cin>>denominator;
  try{
if(denominator==0)
{ throw("infinite");}

double d=numerator/denominator;
  cout<<numerator<<"/"<<denominator<<"="<<d<<endl;

}

catch (const char *message)
{
	cout<<message;
}
}
/*enter the numerator:6
enter the denominator:27
6/27=0.222222
/*enter the numerator:6
enter the denominator:0
infinite

