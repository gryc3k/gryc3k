#include <stdio.h>

int main() {
    int a = 5, b = 3;

    a += b; // a = a + b
    printf("a += b -> a = %d\n", a);

    a -= b; // a = a - b
    printf("a -= b -> a = %d\n", a);

    a *= b; // a = a * b
    printf("a *= b -> a = %d\n", a);

    return 0;
}
