#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 15;

    int max_value = max(max(a, b), c);

    printf("Max value: %d\n", max_value);

    return 0;
}
