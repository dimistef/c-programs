#include <stdio.h>

int main() {
    int num;
    int count = 0;

    while (scanf("%d\n", &num) != EOF) {
        if (num < 0) {
            count++;   
        }
    }
    
    printf("Count = %d\n", count);

    return 0;
}