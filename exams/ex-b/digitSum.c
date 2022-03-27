#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    while (scanf("%d\n", &num) != EOF) {
        while (num > 0) {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
    }
    
    printf("Sum = %d\n", sum);

    return 0;
}