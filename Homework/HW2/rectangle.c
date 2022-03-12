#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int rectangle(double w, double h, double *P, double *S) {
    if (w <= 0 || h <= 0) {
        return 1;
    }
    
    *P = (w + h) * 2;
    *S = w * h;
    return 0;
}

int main() {
    double w, h, P, S;
 
    while(scanf("%lf %lf", &w, &h) != EOF) {
        if(rectangle(w, h, &P, &S) == -1) {
            fprintf(stderr, "Invalid triangle sides!\n");
        } else {
            rectangle(w, h, &P, &S);
            printf("S = %.2lf\nP = %.2lf\n", S, P);
        }
    }

    return 0;
}