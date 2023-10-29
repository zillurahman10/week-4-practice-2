#include <stdio.h>

void printAscending(int a, int b, int c) {
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", a, b, c);
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printAscending(A, B, C);

    return 0;
}
