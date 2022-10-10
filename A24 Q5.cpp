#include<iostream>
void test(int);
using namespace std;
int main()
{      
        int num;
       cout<<"Entre the number";
       cin>>num;
       test(num);
}
void test(int num)
{
        int a,b,c;
        a=-1;
        b=1;
        while(a+b<=num)
        {
                c=a+b;
                if(c==num)
                {
                        cout<<"Given number in fibonacci series";
                        break;
                }
                a=b;
                b=c;
        }
        if(a+b>num)
        cout<<"Given number is not in fabbonacci series";
}
