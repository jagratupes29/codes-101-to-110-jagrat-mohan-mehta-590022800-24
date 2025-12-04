#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    for (int x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = total - left + x;
        if (left == right) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer: -1\n");
    return 0;
}
