#include <iostream>
#include <algorithm>

using namespace std;

int n,x,y;
pair <int,int> arr[100000+5];
int f=0,s=0;
int temp=0;

void finding()
{
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if ( (y<=(arr[j].first-arr[i].first)) && ((arr[i].first+arr[j].first)<=x))
				{
					temp=(arr[i].first+arr[j].first);
					f=arr[i].second;
					s=arr[j].second;
				}
			}
		}
}

void in()
{
	cin>>n>>x>>y;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].first;
		arr[i].second=i+1;
	}
}

void solution()
{
	sort(arr,arr+n);
	finding();
}

void out()
{
	if ( (f!=0) && (s!=0) ) cout<<f<<" "<<s<<"\n";
	else cout<<"0\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
