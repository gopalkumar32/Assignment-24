#include<iostream>
#include<math.h>
void area(int);
void area(int,int);
void area(int,int,int);
using namespace std;
int main()
{
	int r,l,b,s1,s2,s3;
	cout<<"Entre the value of radius"<<endl;
	cin>>r;
	area(r);
	cout<<"Entre the value of length and breath"<<endl;
	cin>>l>>b;
	area(l,b);
	cout<<"Entre the side of triangle"<<endl;
	area(s1,s2,s3);
}
void area(int r)
{
	cout<<"Area of circle is"<<3.14*r*r<<endl;
}
void area(int l,int b)
{
	cout<<"area of rectangle"<<l*b<<endl;
}
void area(int s1,int s2,int s3)
{
       int s,a;
       s=(s1+s2+s3)/2;
       a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
       cout<<"Area of triangle is"<<a<<endl;	
}
