#include <stdio.h>

int main() {
    int n, a;
    char b[100];
    float c;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %99s %f", &a, b, &c);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", a, b, c);
    }

    return 0;
}