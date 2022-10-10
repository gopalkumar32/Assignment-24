#include<iostream>
using namespace std;
int fact(int);
int combi(int,int);
void printpascal(int);
int fact(int n)
{
	int f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	return(f);
}
int combi(int n,int r)
{
	return(fact(n)/fact(n-r)/fact(r));
}
void printpascal(int line)
{
	int i,j,k,r;
	for(i=1;i<=line;i++)
	{
		k=1;r=0;
		for(j=1;j<=2*line-1;j++)
		{
			if(j>=line+1-i&&j<=line-1+i&&k)
			{
				cout<<combi(i-1,r)<<endl;
				k=0;r++;
			}
			else
			{
				cout<<" ";
				k=1;
			}
		}
		cout<<endl;
	}
}
int main()
{
	int line;
	cout<<"Entre the value of line"<<endl;
	cin>>line;
	printpascal(line);
}
