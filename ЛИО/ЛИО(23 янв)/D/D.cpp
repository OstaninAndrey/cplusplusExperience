#include<iostream>
#include<fstream>
#include<set>

using namespace std;

const int numOfLet = 1e5 + 5;

int n,m;
int arr[numOfLet];
int ans;

void in()
{
	ifstream cin("queries.in");
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}


}

void solution()
{
	sort(arr, arr + n);
	for (int i = 0; i<n; i++)
	{
		
	}

}

void out()
{
	ofstream cout("queries.out");
	cout << *mySet.rbegin() << "\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}