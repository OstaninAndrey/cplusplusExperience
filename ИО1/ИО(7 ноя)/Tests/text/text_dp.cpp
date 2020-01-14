#include <bits/stdc++.h>

const int draw[] = {2, 1, 1, 1, 2, 2, 1, 3, 3, 2, 3, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1};
//                  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z                          

int main() {
    freopen("text.in", "r", stdin);
    freopen("text.out", "w", stdout);
    std::string text;
    std::cin >> text;
    int ans = 0;
    for (size_t i = 0; i < text.size(); i++) {
        ans += draw[text[i] - 'A'];
    }
    std::cout << ans << '\n';
    return 0;
}