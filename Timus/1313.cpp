#include<iostream>

using namespace std;

int pixels=0,arr[102][102];
int ind=0,ind2=0,ind3=1,ind4=1,ind5=1;

void in()
{
	cin>>pixels;
	for(int i=0;i<pixels;i++)
	{
		for(int j=0;j<pixels;j++)
		{
			cin>>arr[i][j];
		}
	}
}

void solution()
{
	
}

void out()
{
	for(int i=1;i<=pixels;i++)
	{
			for(int j=i;j>0;j--)
			{
				cout<<arr[j-1][ind]<<" ";
				ind++;
			}	
			ind=0;
	}
	for(int i=pixels-1;i>0;i--)
	{
		ind4++;
		for(int j=pixels-1;j>=ind5;j--)
		{
			if (ind3<=(pixels-1)){
				cout<<arr[j][ind3]<<" ";
			}
			ind3++;
		}
		ind3=ind4;
	}
}

int main()
{
	in();
//	solution();
	out();
	return 0;
}
