#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

long long int dfs(map<long long, long long>& s, long long int a, long long int c, long long int n) {
    if (s.find(n) != s.end()) {
        return s[n];
    }
    else {
        return s[n] = (dfs(s, a, c, n / 2) * dfs(s, a, c, n / 2 + n % 2)) % c;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long a, b, c; cin >> a >> b >> c; a %= c;
    map<long long, long long> s;

    s[1] = a;

    cout << (dfs(s, a, c, b));

    return 0;
}