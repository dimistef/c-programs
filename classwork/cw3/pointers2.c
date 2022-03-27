#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void increment(int* num) {
    (*num)++;   
}

void swapInt(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int triangle(double a, double b, double c, double* P, double* S) {
    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    } 
    
    *P = a + b + c;
    double p = *P / 2;
    *S = sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}

int squareFunction(double a, double b, double c, double* x1, double *x2) {
    double D = pow(b, 2) - 4 * a * c;
    if (D < 0) {
        return -1;
    }

    *x1 = (-b + sqrt(D)) / 2;
    *x2 = (-b - sqrt(D)) / 2;

    return 0;
}

int main(int argc, char *argv[]) {
    double x1, x2;
    double a = atoi(argv[1]);
    double b = atoi(argv[2]);
    double c = atoi(argv[3]);

    if (squareFunction(a, b, c, &x1, &x2) == -1) {
        fprintf(stderr, "No real roots!");
        return 1;
    } 

    squareFunction(a, b, c, &x1, &x2);
    printf("x1 = %.2lf\n x2 = %.2lf\n", &x1, &x2);
    

    // double a, b, c, P, S;

    // printf("Enter triangle sides: ");
    // scanf("%lf %lf %lf", &a, &b, &c);

    // if(triangle(a, b, c, &P, &S) == -1) {
    //     fprintf(stderr, "Invalid triangle sides!\n");
    //     return 1;
    // }

    //printf("P = %.2lf\nS = %.2lf\n", P, S);

    return 0;
}