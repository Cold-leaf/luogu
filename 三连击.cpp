#include<iostream>
#include<vector>
using namespace std;



int main()
{
	int x,y,z;
	for(x=123;x<333;x++)
	{
		int count[9]={0};
		y=2*x;
		z=3*x;
		int a[9];
		a[0]=x%10;
		a[1]=x/10%10;
		a[2]=x/100%10;
		a[3]=y%10;
		a[4]=y/10%10;
		a[5]=y/100%10;
		a[6]=z%10;
		a[7]=z/10%10;
		a[8]=z/100%10;
		for(int i=0;i<9;i++)
		{
			count[a[i]-1]++;
			
		}
		if(a[0]==0||a[1]==0||a[2]==0||a[3]==0||a[4]==0||a[5]==0||a[6]==0||a[7]==0)
		{
			continue;	
		}
		if(count[0]!=1||count[1]!=1||count[2]!=1||count[3]!=1||count[4]!=1||count[5]!=1||count[6]!=1||count[7]!=1)
		{
			continue;	
		}
		cout<<x<<" "<<y<<" "<<z<<endl;
		
	}
	
} 
