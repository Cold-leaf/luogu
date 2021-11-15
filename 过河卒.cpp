#include<iostream>
using namespace std;

long long int f(long long int x,long long int y,long long int a,long long int b)
{
	/*if((x==a&&y==b)||(x==a+1&&y==b+2)||(x==a+2&&y==b+1)||(x==a+2&&y==b-1)||(x==a+1&&y==b-2)||(x==a-1&&y==b+2)||(x==a-2&&y==b+1)||(x==a-2&&y==b-1)||(x==a-1&&y==b-2))
	{
		return 0;
	}*/
	if((x-1)>=0&&(y-1)>=0)
	{
		return f(x,y-1,a,b)+f(x-1,y,a,b);
	}
	else if((x-1)<0&&(y-1)>=0)
	{
		return f(x,y-1,a,b);
	}
	else if((x-1)>=0&&(y-1)<0)
	{
		return f(x-1,y,a,b);
	}
	else
	{
		return 1;
	}
}

int main()
{
	long long int w,h,a,b;
	cin>>w>>h>>a>>b;
	cout<<f(w,h,a,b);
	
	return 0;
}
