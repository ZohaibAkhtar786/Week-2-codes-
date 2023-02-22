#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int Num1,Num2;
cout<<"Enter the first number"<<endl;
cin>>Num1;
cout<<"Enter the second number"<<endl;
cin>>Num2;
Num1=Num1+Num2;
Num2=Num1-Num2;
Num1=Num1-Num2;
cout<<"The swapped numbers are :"<<Num1<<"\t"<<Num2;

}
