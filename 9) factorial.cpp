#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,x,y=1;
cout<<"Enter the number to find its factorial"<<endl;
cin>>x;
for(int i=1;i<=x;i++)
{
	y=y*i;
	}	
	cout<<"The factorial of the given number is :"<<y;
	return 0;
}
