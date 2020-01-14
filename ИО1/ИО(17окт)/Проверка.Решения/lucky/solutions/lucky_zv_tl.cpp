#include <fstream>
using namespace std;

ifstream cin("lucky.in");
ofstream cout("lucky.out");

int main()
{
	int n, m;
	cin >> n >> m;

	int cnt = 0;
	for (int i = n - m; i <= n; i++) {
		bool ok = true;
		int x = i;
		int last = -1;
		while (x) {
			if (last == -1 || x % 10 == last) last = x % 10; else ok = false;
			x /= 10;
		}
		cnt += ok;
	}

	cout << cnt << endl;
}