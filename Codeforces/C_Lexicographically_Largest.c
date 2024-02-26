#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} Pair;

int compare(const void *a, const void *b) {
    return (*(Pair *)a).value - (*(Pair *)b).value;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        Pair cnt[n];

        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            cnt[i].key = a + i + 1;
            cnt[i].value = a;
        }

        qsort(cnt, n, sizeof(Pair), compare);

        for (int i = 0; i < n; i++) {
            printf("%d ", cnt[i].key);
            if (i < n - 1 && cnt[i].value == cnt[i + 1].value) {
                cnt[i + 1].key--;
            }
        }
        printf("\n");
    }
    return 0;
}
