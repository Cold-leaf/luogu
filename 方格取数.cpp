#include<iostream>
#include<vector>
using namespace std;

int score(int **a,int x,int y)
{
	if(a[x+1][y]>a[x][y+1])
	{
		return score(a,x+1,y);
	}
	else if((a[x+1][y]<a[x][y+1]))
	{
		return score(a,x,y+1);
	}
	else
	{
		
	}
}

int main()
{
	int sum=0;
	
	int num;
	cin>>num;
	int x[num]={0};
	int y[num]={0};
	int value[num]={0};
	
	int max_x=0,max_y=0;
	for(int i=0;i<num;i++)
	{
		cin>>x[i]>>y[i]>>value[i];
		if(x[i]==0&&y[i]==0&&value[i]==0)
		{
			break;
		}
		if(max_x<x[i])
		{
			max_x=x[i];
		}
		if(max_y<y[i])
		{
			max_y=y[i];
		}
	}
	
	int pan[max_x][max_y]={0};
	for(int i=0;i<num;i++)
	{
		pan[x[i]][y[i]]=value[i];
	}
	
	for(int i=0;i<max_x+max_y;i++)
	{
		
	}
	
} 
