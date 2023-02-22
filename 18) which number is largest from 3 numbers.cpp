#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter the first number :";
	cin>>x;
	cout<<"Enter the sescond number :";
	cin>>y;
	cout<<"Enter the third number :";
	cin>>z;
	if(x>y&&x>z)
	{
		cout<<x<<" is largest number ";
	}
	else if(y>z&&y>x)
	{
		cout<<y<<" is largest number ";
	}
	else{
		cout<<z<<" is largest number ";
		
	}
	return 0;
}
