#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int triangle(double a, double b, double c, double *P, double *S) {
    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    } 
    
    *P = a + b + c;
    double p = *P / 2;
    *S = sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}
 
int main() {
    double a, b, c, P, S;
 
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        if(triangle(a, b, c, &P, &S) == -1) {
            fprintf(stderr, "Invalid triangle sides!\n");
        } else {
            triangle(a, b, c, &P, &S);
            printf("S = %.2lf\nP = %.2lf\n", S, P);
        }
    }

    return 0;
}