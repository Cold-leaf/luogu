#include<iostream> 
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int max=0;
	for(int i=0;s[i]!='\0';i++)
	{
		int length=1;
		for(int j=i+1;s[j]!='\0';j++)
		{
			int sym=1;
			for(int p=j-1;p>=i;p--)
			{
				if(s[p]==s[j])
				{
					sym=0;
					break;
				}
				
			}
			if(sym==1) length++;
			else break;
			
		}
		if(max<length)
		{
			max=length;
		}
		cout<<i<<" "<<length<<endl;
	}
	cout<<max;
}
