#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    while (scanf("%d", &num) != EOF) {
        if (num >= 10 && num < 100 && num % 2 == 0) {
            sum += num;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
