#include<iostream>
#include<fstream>
#include<set>

using namespace std;

const int numOfLet = 1e5 + 5;

set <long long> mySet;
int n;
int arr[numOfLet], temp = 0;
long long ans;

void insertEl(int a)
{
	temp = mySet.size();
	mySet.insert(a);
	if (mySet.size() <= temp)
	{
		mySet.erase(a);
		insertEl(2 * a);
	}
	else temp++;
}

void in()
{
	ifstream cin("maxnumber.in");
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
		insertEl(arr[i]);
	}

}

void out()
{
	ofstream cout("maxnumber.out");
	cout << *mySet.rbegin() << "\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
