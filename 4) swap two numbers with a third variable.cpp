#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,y,temp=0;
cout<<"Enter the first number";
cin>>x;
cout<<"Enter the second number";
cin>>y;
temp=x;
x=y;
y=temp;
cout<<"The swapped numbers are :"<<x<<"\t"<<y;
}



