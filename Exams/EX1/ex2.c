#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int num;

    while (scanf("%d", &num) != EOF) {
        if (strcmp(argv[1], "-evens") == 0) {
            if (num % 2 == 0) {
                printf("%d\n", num);
            }
        } else if (strcmp(argv[1], "-odds") == 0) {
            if (num % 2 != 0) {
                printf("%d\n", num);
            }
        } else if (strcmp(argv[1], "-positives") == 0) {
            if (num >= 0) {
                printf("%d\n", num);
            }
        } else if (strcmp(argv[1], "-negatives") == 0) {
            if (num < 0) {
                printf("%d\n", num);
            }
        } else {
            printf("%d\n", num);
        }
    }
    
    return 0;
}
