#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int count;
	cin>>count;
	
	vector<vector<int> > X(count);
	vector<vector<int> > Y(count);
	for(int i=0;i<count;i++)
	{
		int x,y,w,h;
		cin>>x>>y>>w>>h;
		
		X[i].resize(2);
		X[i][0]=x;
		X[i][1]=x+w-1;
		
		Y[i].resize(2);
		Y[i][0]=y;
		Y[i][1]=y+h-1;
	}
	/*
	for(int j=0;j<count;j++)
	{	
		cout<<"X:";
		for(int i=0;i<X[j].size();i++)
		{
			cout<<X[j][i]<<" ";
		}
		cout<<"Y:";
		for(int i=0;i<Y[j].size();i++)
		{
			cout<<Y[j][i]<<" ";
		}
		cout<<endl;
	}*/
	
	int px,py;
	cin>>px>>py;
	//cout<<"px:"<<px<<" py:"<<py<<endl;
	int sym3=0;
	for(int i=count-1;i>=0;i--)
	{
		int sym1=0,sym2=0;
		
		if(px<=X[i][1]&&px>=X[i][0])
		{
			//cout<<"px="<<px<<" i="<<i<<" X="<<X[i][0]<<endl;
			sym1=1;
			//break;
		}
		
		if(sym1==1)
		{
			
			if(py<=Y[i][1]&&py>=Y[i][0])
			{
				//cout<<"py="<<py<<" i="<<i<<" Y="<<Y[i][0]<<endl;
				sym2=1;
				//break;
			}
			
		}
		
		if(sym1==1&&sym2==1)
		{
			cout<<i+1;
			sym3=1;
			break;
		}
		
	}
	if(sym3==0)
	{
		cout<<"-1";
	}
	
}  
