#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    const char *words[] = {"", "one", "two", "three", "four", "five",
                           "six", "seven", "eight", "nine"};
    for (int n = a; n <= b; n++) {
        if (n <= 9)
            printf("%s\n", words[n]);
        else
            printf("%s\n", (n % 2 == 0) ? "even" : "odd");
    }
    return 0;
}
