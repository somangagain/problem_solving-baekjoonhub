
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; scanf("%d", &n);
    int* dp = (int*)malloc(sizeof(int) * (n + 1));
    memset(dp, 0, sizeof(int) * (n + 1));
    *(dp + 1) = 1;

    for (int i = 2; i <= n; i++) {
        *(dp + i) = *(dp + i - 1) + *(dp + i - 2);
    }

    cout << *(dp + n);

    return 0;
}