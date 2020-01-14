#include<iostream>
#include<fstream>

using namespace std;

const int maxnm = 1e5 + 5;

int n, m;
char ni[maxnm], mi[maxnm];
int maxL, maxR, L, R;
int ans, ansi[maxnm];

bool forLeft(int ind)
{
	for (int i = ind; i >= (ind - maxL); i--)
	{
		if ((ni[i] == '#') || ((ind - maxL) < 0)) return false;
	}
	return true;
}

bool forRight(int ind)
{
	for (int i = ind; i <= (ind+maxR); i++)
	{
		if ((ni[i] == '#')||(ind + maxR > n)) return false;
	}
	return true;
}

void in()
{
	ifstream cin("droids.in");
	cin >> n >> m;
	for (int i = 0; i<n; i++)
	{
		cin >> ni[i];
	}
	for (int i = 0; i<m; i++)
	{
		cin >> mi[i];
		if (mi[i] == 'L')  { L++; R--; }
		else { R++; L--; }
		if (R>maxR) { maxR = R; }
		if (L>maxL) { maxL = L; }
	}
}

void solution()
{
	for (int i = 0; i<n; i++)
	{
		if (ni[i] == 'D')
			if (forLeft(i) == true && forRight(i) == true) {
				ansi[ans] = i;
				ans++;
			}
	}
}

void out()
{
	ofstream cout("droids.out");
	cout << ans << "\n";
	for (int i = 0; i<ans; i++) cout << ansi[i]+1 << " ";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
