#include<iostream>
void max(float,float);
using namespace std;
int main()
{
     int a,b;
     cout<<"Entre the value of a & b"<<endl;
     cin>>a>>b;
     max(a,b);
}
void max(float a,float b)
{
	int c;
	c=a>b?a:b;
	cout<<"maximun of two number is "<<c;
}
