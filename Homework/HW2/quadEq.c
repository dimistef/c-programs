#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int quadEq(double a, double b, double c, double *x1, double *x2) {
    double D = pow(b, 2) - 4 * a * c;
    if (D < 0) {
        return -1;
    }
    if (D == 0) {
        *x1 = (-b - sqrt(D)) / 2 * a;
        *x2 = (-b + sqrt(D)) / 2 * a;
        return 0;
    }
    *x1 = (-b - sqrt(D)) / 2 * a;
    *x2 = (-b + sqrt(D)) / 2 * a;
 
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        fprintf(stderr, "Invalid number of arguments\n");
        return 1;
    }

    double x1, x2;
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);

    if(quadEq(a, b, c, &x1, &x2) == -1) {
        fprintf(stderr, "No real roots\n");
        return 1;
    } 
        
    quadEq(a, b, c, &x1, &x2);
    printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);

    return 0;
}
