#include<iostream>
#include<algorithm>

using namespace std;

long long arr[100005];
int a;

void in()
{
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
}

void solution()
{
	sort(arr,arr+a);
}

void out()
{
	cout<<arr[0]*arr[a-1];
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
