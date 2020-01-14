#include<iostream>
#include<vector>

using namespace std;

int nf=0,nl=0;
bool arr[100000000]={true};
int temp=0,sum=0;

void in()
{
	cin>>nf>>nl;
}

void solution()
{
	if (nf>=2){
		for(int i=nf;i*i<=nl;i++)
		{
			if (arr[i]==true) {
				for(int j=i*i;j<=nl;j+=i)
				{
					arr[j]=false;
				}
			}
		}
	}
	else{
		temp=2-nf;
		for(int i=nf+temp;i*i<=nl;i++)
		{
			if (arr[i]==true) {
				for(int j=i*i;j<=nl;j+=i)
				{
					arr[j]=false;
				}
			}
		}
	}
}

void out()
{
	if (temp==0)
	{
		for(int i=nf;i<nl;i++)
		{
			sum+=arr[i];
		}
	}
	else {
		sum++;
		for(int i=nf+temp;i<nl;i++)
		{
			sum+=arr[i];
		}
	}
	cout<<sum;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
