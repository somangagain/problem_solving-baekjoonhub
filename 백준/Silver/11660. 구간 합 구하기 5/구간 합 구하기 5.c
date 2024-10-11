#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m; scanf("%d %d", &n, &m);

    int* a = (int*)malloc((n + 1) * (n + 1) * sizeof(int));

    for (int y = 1, t; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            scanf("%d", &t);
            *(a + y * (n + 1) + x) = *(a + y * (n + 1) + x - 1) + *(a + (y - 1) * (n + 1) + x) - *(a + (y - 1) * (n + 1) + x - 1) + t;
        }
    }

    int x1, y1, x2, y2, s;
    while(m--) {
        scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
        s = *(a + y2 * (n + 1) + x2) - *(a + y2 * (n + 1) + x1 - 1) - *(a + (y1 - 1) * (n + 1) + x2) + *(a + (y1 - 1) * (n + 1) + x1 - 1);
        printf("%d\n", s);
    }

    free(a);

    return 0;
}