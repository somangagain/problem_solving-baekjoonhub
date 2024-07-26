#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}