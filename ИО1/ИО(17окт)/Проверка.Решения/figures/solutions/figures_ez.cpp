#include <bits/stdc++.h>
#define NAME "figures"
using namespace std;                               
int n;
char s[100001];

int main() {
    freopen(NAME".in", "r", stdin);
    freopen(NAME".out", "w", stdout);
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; ++i) {
        switch(s[i]) {
            case 'N':
                s[i] = 0;
                break;
            case 'S':
                s[i] = 1;
                break;
            case 'W':
                s[i] = 2;
                break;
            case 'E':
                s[i] = 3;
                break;
        }
    }
    int ans = n;
    for (int i = 0; i < 4; ++i) {
        int cur = 0;
        for (int j = 0; j < n; ++j) {
            cur += s[j] != i;
        }
        ans = min(ans, cur);
    }
    printf("%d\n", ans);
    return 0;
}
