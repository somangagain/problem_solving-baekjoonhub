#include <bits/stdc++.h>

using namespace std;

int A[10002];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    
    while (n--) {
        int x; cin >> x;
        A[x]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (A[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}