#include<iostream>
void add(int,int,int=0);
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Entre two number"<<endl;
	cin>>a>>b;
	add(a,b);
	cout<<"Entre three number"<<endl;
	cin>>a>>b>>c;
	add(a,b,c);
}
void add(int a,int b,int c)
{
int	sum=a+b+c;
	cout<<"sum of number"<<sum<<endl; 
}
