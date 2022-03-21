#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    if (argc > 1) {
        while (scanf("%d", &num) != EOF) {
            for (int i = 1; i < argc; i++) {
                if (strcmp(argv[i], "-evens") == 0 || strcmp(argv[i], "-e") == 0) {
                    if (num % 2 == 0) {
                        printf("%d\n", num);
                    }
                }
                if (strcmp(argv[i], "-odds") == 0 || strcmp(argv[i], "-o") == 0) {
                    if (num % 2 != 0) {
                        printf("%d\n", num);
                    }
                }
                if (strcmp(argv[i], "-positives") == 0 || strcmp(argv[i], "-p") == 0) {
                    if (num >= 0) {
                        printf("%d\n", num);
                    }
                }
                if (strcmp(argv[i], "-negatives") == 0 || strcmp(argv[i], "-n") == 0) {
                    if (num < 0) {
                        printf("%d\n", num);
                    }
                }
                if (strcmp(argv[i], "-range") == 0 || strcmp(argv[i], "-r") == 0) {
                    if (num >= atoi(argv[i+1]) && num <= atoi(argv[i+2])) {
                        printf("%d\n", num);
                    }
                }
            }
        }
    } else {
        while (scanf("%d", &num)) {
            printf("%d\n", num);
        }
        
    }
    
    return 0;
}
