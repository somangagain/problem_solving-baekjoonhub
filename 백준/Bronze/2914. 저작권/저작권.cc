#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    float a, b;
    int s;
    cin >> a >> b;
    b -= 0.99;
    s = a * b;
    cout << s + 1;

    return 0;
}