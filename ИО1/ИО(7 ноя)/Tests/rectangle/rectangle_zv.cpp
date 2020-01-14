#include <fstream>
#include <cstdlib>
using namespace std;

typedef long long ll;

ifstream cin("rectangle.in");
ofstream cout("rectangle.out");

void check(ll n, ll m, ll p)
{
    ll s = 2 * (n + m + m + n);
    ll i2 = s - p;
    ll i = i2 / 2;
    if (i2 % 2 == 0 && i > 0 && i < n) {
        cout << "YES\n";
        exit(0);
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
