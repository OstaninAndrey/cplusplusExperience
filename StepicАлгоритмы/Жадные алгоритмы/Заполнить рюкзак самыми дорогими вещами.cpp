
// IMPORTANT! "cout<<fixed<<setprecicion(n)<<answer;" -number of digits after comma
// library-#include<iomanip>

#include<iostream>
#include <iomanip>

using namespace std;

struct CoastNnumber
{
	double Values[1000];
	int Wi[1000];
};

// cin:
int n, W, wi[1000];
double ci[1000];
// temp:
double Dtemp = 0;
int Itemp = 0;
CoastNnumber things;
// cout:
double answer = 0;

double MaxValue(CoastNnumber things, int n, int W)
{
	int i = 0;
	double ans = 0;
	while ((W > 0) || (i<n))
	{
		if (W - things.Wi[i] >= 0) {
			ans += things.Values[i] * things.Wi[i];
			W = W - things.Wi[i];
		}
		else {
			ans += W*things.Values[i];
			W = 0;
		}
		i++;
	}
	return ans;
}

void BubbleSort()
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - 1;j++)
		{
			if (things.Values[j + 1]>things.Values[j]) {
				Dtemp = things.Values[j];
				things.Values[j] = things.Values[j + 1];
				things.Values[j + 1] = Dtemp;
				Itemp = things.Wi[j];
				things.Wi[j] = things.Wi[j + 1];
				things.Wi[j + 1] = Itemp;
			}
		}
	}
}

void CountValues()
{
	for (int i = 0;i < n;i++)
	{
		things.Values[i] = ci[i] / wi[i];
		things.Wi[i] = wi[i];
	}
}

void in()
{
	cin >> n >> W;
	for (int i = 0;i<n;i++)
	{
		cin >> ci[i] >> wi[i];
	}
}

void solution()
{
	CountValues();
	BubbleSort();
	answer = MaxValue(things, n, W);
}

void out()
{
	cout << fixed;
	cout << setprecision(3) << answer << "\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
