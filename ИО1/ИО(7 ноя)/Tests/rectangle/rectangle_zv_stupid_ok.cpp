#include <fstream>
#include <cstdlib>
using namespace std;

typedef long long ll;

ifstream cin("rectangle.in");
ofstream cout("rectangle.out");

void check(ll n, ll m, ll p)
{
    for (int i = 1; i < n; i++) {
        ll s = 2 * (n + m + m + n - i);
        if (s == p) {
            cout << "YES\n";
            exit(0);
        }
    }
}

int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    check(n, m, p);
    check(m, n, p);

    cout << "NO\n";

    return 0;
}
