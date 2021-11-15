#include<iostream> 
#include<string>
#include<vector>
using namespace std;

int main()
{
	int a[1]={2};
	int b[]={};
	vector<int> A(a,a+1);
	vector<int> B(b,b);
	int length=A.size()+B.size();
	int c[length];
	int p=0,q=0;
	for(int i=0;i<length;i++)
	{
		if(a[p]>b[q])
		{
			cout<<b[q]<<endl;
			c[i]=b[q];
			//i++;
			q++;
		}
		else
		{
			cout<<a[p]<<endl;
			c[i]=a[p];
			//i++;
			p++;
		}
	}
	/*
	for(int i=0;i<length;i++)
	{
		cout<<c[i]<<" ";
	}*/
	if(length%2!=0) cout<<c[length/2];
    else cout<<(c[length/2]+c[length/2-1])*1.0/2;
}
