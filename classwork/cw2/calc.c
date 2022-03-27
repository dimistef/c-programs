#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
    double num1, num2;
    char op;
 
    while(scanf("%lf %c %lf", &num1, &op, &num2) != EOF) {
        if (op == '+') {
            printf("%.2lf\n", num1 + num2);

        } else if (op == '-') {
            printf("%.2lf\n", num1 - num2);

        } else if (op == 'x') {
            printf("%.2lf\n", num1 * num2);

        } else if (op == '/') {
            printf("%.2lf\n", num1 / num2);

        } else {
            fprintf(stderr, "Invalid arguments!\n");
            return 1;
        }
    }

    // ./calc.out < exprs.txt | sort -n | tail -1
    
    return 0;
}