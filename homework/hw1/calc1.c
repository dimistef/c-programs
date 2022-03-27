#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
    float num1 = atof(argv[1]);
    float num2 = atof(argv[3]);
    float result;
 
    if (argc < 3) {
        fprintf(stderr, "Invalid number of arguements!\n");
        return 1;
    }
 
    if (strcmp(argv[2], "+") == 0) {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        return 0;
    } else if (strcmp(argv[2], "-") == 0) {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        return 0;
    } else if (strcmp(argv[2], "x") == 0) {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        return 0;
    } else if (strcmp(argv[2], "/") == 0) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
        return 0;
    } else {
        fprintf(stderr, "Invalid operator!\n");
        return 1;
    }
 
    fprintf(stderr, "Invalid arguments!\n");
    return 1;
}