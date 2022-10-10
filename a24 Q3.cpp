#include<iostream>
void power(int,int);
using namespace std;
int main()
{
        int a,b;
        cout<<"Entre the two number";
        cin>>a>>b;
        power(a,b);
}
void power(int a,int b)
{
        int p=1;
        for(int i=1;i<=b;i++)
        {
                p=p*a;
        }
        cout<<a<<" power "<<b<<" is "<<p;
}
