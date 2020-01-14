#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 1e6;

int N, n;
pair <int,int> arr[maxn];
int temp, l, r, mid;
int ans;

int search(int l, int r)
{
	if (l >= r) return -1;
	mid = (l+r)/2;
	if (arr[mid].first == N) return mid; 
	if (arr[mid].first > N) return search(l,mid);
	if (arr[mid].first < N) return search(mid,r);
}

void in()
{
	cin>>n;
	for(int i=0; i < n; i++)
	{
		cin>>temp;
		arr[i].first = temp;
		arr[i].second = i+1;
	}
	cin>>N;
}

void solution()
{
	r = n;
	sort(arr, arr+n);
	ans = search(l,r);
}

void out()
{
	if (ans != -1) cout<<arr[ans].second;
	else cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

