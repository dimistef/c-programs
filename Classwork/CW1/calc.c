#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int result;

    if (argc < 2) {
        fprintf(stderr, "Invalid of arguments!\n");
        return 1;
    }

    if (argc == 2) {
        result = 0;
        int num;
        while(scanf("%d", &num) != EOF) {
            result += num;
        }
        printf("Sum = %d\n", result);
    }
    
    if (strcmp(argv[1], "-s") == 0) {
        result = 0;
        for (int i = 2; i < argc; i++) {
            result += atoi(argv[i]);
        }
        printf("Result: %d\n", result);
        return 0;
    }

    if(strcmp(argv[1], "-p") == 0) {
        result = 1;
        for (int i = 2; i < argc; i++) {
            result *= atoi(argv[i]);
        }
        printf("Result: %d\n", result);
        return 0;
    } 

    fprintf(stderr, "Invalid arguments!\n");
    return 1;
}