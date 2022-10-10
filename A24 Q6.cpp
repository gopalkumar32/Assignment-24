#include<iostream>
void swap(int*,int*);
using namespace std;
int main()
{
        int a,b;
        cout<<"Entre the value of a & b";
        cin>>a>>b;
        cout<<"A="<<a<<endl<<"B="<<b<<endl;
        swap(&a,&b);
        cout<<"NOW A="<<a<<endl<<"B="<<b;
}
void swap(int*a,int*b)
{
        int t;
        t=*a;
        *a=*b;
        *b=t;
        
}
