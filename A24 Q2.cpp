#include<iostream>
void highest(int);
using namespace std;
int main()
{
        int num;
        cin>>num;
        highest(num);
}
void highest(int num)
{
        int r,a,w;
        a=0;
        while(num!=0)
        {  
                r=num%10;
                if(r>a)
                w=r;
                else
                w=a;
                a=w;
                num=num/10;
        }
        cout<<"Greates digit in given number is "<<w;
        
}
