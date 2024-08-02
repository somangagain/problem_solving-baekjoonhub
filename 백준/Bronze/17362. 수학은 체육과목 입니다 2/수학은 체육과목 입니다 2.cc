#include <bits/stdc++.h>

using namespace std;

int A[9] = { 2, 1, 2, 3, 4, 5, 4, 3 };

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    cout << (A[n % 8]);

    return 0;
}