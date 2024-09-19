#include <bits/stdc++.h>

using namespace std;

void sol(int n, int i) {
    for (int j = 0; j < i; j++) cout << '*';
    for (int j = 0; j < (n - i) * 2; j++) cout << ' ';
    for (int j = 0; j < i; j++) cout << '*';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;

    for (int i = 1; i <= n; i++) sol(n, i);
    for (int i = n - 1; i >= 1; i--) sol(n, i);

    return 0;
}