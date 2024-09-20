#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; scanf("%d", &n);
    
    int** DP = (int**)malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        int* p = (int*)malloc(sizeof(int) * n);
        memset(p, 0, sizeof(int) * n);
        *(DP + i) = p;
    }

    int t, s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &t);
            
            s = 0;
            if (i > 0) {
                for (int k = 0; k < 3; k++) {
                    if (k == j) continue;
                    if (!s || s > *(*(DP + k) + i - 1)) s = *(*(DP + k) + i - 1);
                }
            }

            *(*(DP + j) + i) = s + t;
        }
    }

    cout << min(min(*(*(DP + 1) + n - 1), *(*(DP + 2) + n - 1)), *(*(DP + 0) + n - 1));

    return 0;
}