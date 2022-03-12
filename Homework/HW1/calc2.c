#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
    float num1;
    char op;
    float num2;
    float result;
 
    while(scanf("%f %c %f", &num1, &op, &num2) != EOF) {
        if (strcmp(&op, "+") == 0){
            result = num1 + num2;
            printf("%.2f\n", result);
        } else if (strcmp(&op, "-") == 0){
            result = num1 - num2;
            printf("%.2f\n", result);
        } else if (strcmp(&op, "x") == 0){
            result = num1 * num2;
            printf("%.2f\n", result);
        } else if (strcmp(&op, "/") == 0){
            result = num1 / num2;
            printf("%.2f\n", result);
        } else {
            fprintf(stderr, "Invalid arguments!\n");
            return 1;
        }
    }
 
    return 0;
}