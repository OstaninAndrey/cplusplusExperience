#include <fstream>
using namespace std;

ifstream cin("lucky.in");
ofstream cout("lucky.out");

int main()
{
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 1; i < 10; i++) {
        long long x = i;
        while (x <= n) {
            if (x >= n - m) ++cnt;
            x = x * 10 + i;
        }
    }
    cout << cnt << endl;
}
