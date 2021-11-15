#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

#define max_N 100

int max_x=0,max_y=0;
int pan[max_N][max_N];
int r[max_N][max_N]={0};
int s[max_N][max_N]={0};
int X[max_N][max_N]={0};


int T(int x,int y)
{
	if(x<0||y<0)
	{
		return 0;
	}
	int q=pan[x][y];
	//pan[x][y]=0;
	//cout<<"x:"<<x<<" y:"<<y<<" value:"<<q<<endl;
	if(s[x][y]==1)
	{
		return r[x][y];
	}
	
	else
	{
		if(x==0&&y==0)
		{
			//cout<<"end once"<<endl;
			r[0][0]=pan[0][0];
			return r[0][0];
		}
		else
		{
			int m=T(x-1,y);
			int n=T(x,y-1);
			r[x][y]=max(m,n)+q;
			
			
			if(x-1>=0&&y-1>=0)
			{
				int m,n=pan[x-1][y],pan[x][y-1];
				if(r[x][y]==m+q)
				{
					X[x-1][y]+=2;
					
				}
				else
				{					
					X[x][y-1]+=2;
					
				}
			}
			
			s[x][y]=1;
			return r[x][y];
			
		}
	}

	
}

int S(int x,int y)
{
	if(x>max_x||y>max_y)
	{
		return 0;
	}
	int q=pan[x][y];
	//pan[x][y]=0;
	//cout<<"x:"<<x<<" y:"<<y<<" value:"<<q<<endl;
	
	
	if(x==max_x-1&&y==max_y-1)
	{
		//cout<<"end once"<<endl;
		return pan[max_x-1][max_y-1];
	}
	else
	{
		return max(S(x+1,y),S(x,y+1))+q;
		//pan[x][y]=0;
	}
}

int main()
{
	int n;
	cin>>n;
	int x[n],y[n],value[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>value[i];
		if(max_x<x[i])	max_x=x[i];
		if(max_y<y[i])	max_y=y[i];
	}
	
	for(int i=0;i<n;i++)
	{
		pan[x[i]][y[i]]=value[i];
		cout<<pan[x[i]][y[i]]<<endl;
	}
	cout<<max_x<<" "<<max_y<<endl;
	
	int sum1=0,sum2=0;
	sum1=T(max_x,max_y);
	//sum2=S(0,0);
	cout<<sum1<<" "<<sum2<<endl;
	
	for(int i=0;i<n;i++)
	{
		
		cout<<pan[x[i]][y[i]]<<" "<<X[x[i]][y[i]]<<endl;
	}
	return 0;
	
}
