#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int x = a & b, y = a | b, z = a ^ b;
            if (x < k && x > max_and) max_and = x;
            if (y < k && y > max_or)  max_or  = y;
            if (z < k && z > max_xor) max_xor = z;
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
