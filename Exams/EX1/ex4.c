#include <stdio.h>

#define PI 3.14
#define CIRCLEAREA(r) PI*(r*r)

int main() {
    printf("%.2lf\n", CIRCLEAREA(10));

    return 0;
}