#include<iostream>

using namespace std;

int main()
{
	long long m, n;
	int ind = 2 , NumInP=0;
	long long F = 3, F0 = 2, Fpr;
	int a = 1 , a1 = 0 , ans;

	cin >> n >> m;
	while (!((F%m == 1) && (F0%m == 1)))
	{
		Fpr = F;
		F = (F + F0)%m;
		F0 = Fpr;
		ind++;
	}

	NumInP = n%ind;

	for (int i = 2; i <= NumInP; i++)
	{
		ans = (a + a1)%m;
		a1 = a;
		a = ans;
		
	}
	cout << ans << "\n";
	return 0;
}
