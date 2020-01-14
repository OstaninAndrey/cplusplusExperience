#include <bits\stdc++.h>
using namespace std;

int main()
{
    freopen("trap.in", "r", stdin);
    freopen("trap.out", "w", stdout);
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans_i = 0, ans_j = -1;
    for (int i = 1; i < n; i++)
        if (a[ans_i] > a[i])
            ans_i = i;
    for (int j = 0; j < n && ans_j == -1; j++)
        if(a[j] + a[ans_i] <= x && a[j] - a[ans_i] >= y)
            ans_j = j;
    if (ans_j == -1)
        cout << 0 << endl;
    else
        cout << ans_i + 1 << ' ' << ans_j + 1 << endl;
    return 0;
}