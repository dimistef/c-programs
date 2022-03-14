#include <stdio.h>

#define SUM(a,b) a+b
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
    int a = SUM(1, 20);
    int b = MAX(16, 3);
    int c = MIN(4, 9);

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}