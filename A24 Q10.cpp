#include<iostream>
 void add(int,int);
 using namespace std;
 int main()
 {
 	int a;
 	float b;
 	cout<<"Entre the value of a & b"<<endl;
 	cin>>a>>b;
 	add(a,b);
 }
 void add(int a,int b)
 {
 	cout<<"Sum of two number is "<<a+b;
 }
