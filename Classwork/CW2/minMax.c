#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int num, min = INT_MAX, max = INT_MIN;

    while (scanf("%d", &num) != EOF) {
        // max = num > max ? num : max;
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    if (argc == 1) {
        printf("%d\n%d\n", min, max);

    } else if (strcmp(argv[1], "-m") == 0) {
        printf("Min: %d\n", min);

    } else if (strcmp(argv[1], "-M") == 0) {
        printf("Max: %d\n", max);

    } else {
        fprintf(stderr, "Invalid option!"); 
        return 1;
    }
    
    printf("%d\n%d\n", min, max);
    return 0;
}