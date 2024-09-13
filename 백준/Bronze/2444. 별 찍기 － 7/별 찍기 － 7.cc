#include <bits/stdc++.h>

using namespace std;

int N;

void sol(int i) {
    for (int j = 0; j < N - i; j++) cout << " ";
    for (int j = 0; j < 2 * i - 1; j++) cout << "*";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++) sol(i);
    for (int i = N - 1; i >= 0 ; i--) sol(i);

    return 0;
}