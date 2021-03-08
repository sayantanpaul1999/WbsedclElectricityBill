#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n;
	float s1,s2,s3,s4,s5;
	
	cout<<"Enter current reading : "<<endl;
	cin>>n1;
	cout<<"Enter previous reading : "<<endl;
	cin>>n2;
	
	n=n1-n2;
	
	if(n<=102)
	{
		s1=(n*(5.26));
		cout<<"Your bill Amount is : "<< s1 ;
	}
	else if(n>102 && n<=180)
	{
		s2=((102*5.26)+((n-102)*5.86));
		cout<<"Your bill Amount is : "<< s2 ;
	}
	else if(n>180 && n<=300)
	{
		s3=((102*5.26)+(78*5.86)+((n-180)*6.73));
		cout<<"Your bill Amount is : "<< s3 ;
	}
	else if(n>300 && n<=600)
	{
		s4=((102*5.26)+(78*5.86)+(120*6.73)+((n-300)*7.23));
		cout<<"Your bill Amount is : "<< s4 ;
	}
	else 
	{
		s5=((102*5.26)+(78*5.86)+(120*6.73)+(300*7.23)+((n-600)*7.32));
		cout<<"Your bill Amount is : "<< s5 ;
	}
	return 0;
}
