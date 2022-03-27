#include <stdio.h>

#define PI 3.14
#define CIRCLEAREA(r) PI*(r*r)

int main() {
    int r;

    while(scanf("%d", &r) != EOF) {
        printf("%.2lf\n", CIRCLEAREA(r));
    }
    
    return 0;
}
