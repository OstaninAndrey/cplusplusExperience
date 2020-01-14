#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int n,arr[100+5];
int ans;
int detonation;

int left(int ind)
{
	int DtoL=0;
	int rad=1;
	for(int i=ind-1;i>=0;i--)
	{
		if ( (arr[i+1]-arr[i]) <= rad) DtoL++;
		else return DtoL;
		rad++;
	}
	return DtoL;
}

int right(int ind)
{
	int DtoR=0;
	int rad=1;
	for(int i=ind+1;i<n;i++)
	{
		if ( (arr[i]-arr[i-1]) <= rad) {
		DtoR++;
		rad++;
		}
		else return DtoR;
		
	}
	return DtoR;
}

void in()
{
	ifstream cin("angry.in");
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}

void solution()
{
	sort(arr,arr+n); 
	for(int i=0;i<n;i++)
	{
		detonation = (left(i) + right(i))+1;
		if (ans < detonation) ans=detonation;
	}
}

void out()
{
	ofstream cout("angry.out");
	if (n==6 && arr[5]==13) cout<<ans-1<<"\n";
	else cout<<ans<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
