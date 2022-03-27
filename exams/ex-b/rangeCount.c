#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double num;
    int count = 0;
    double minValue = atof(argv[1]);
    double maxValue = atof(argv[2]);

    while (scanf("%lf\n", &num) != EOF) {
        if (num >= minValue && num <= maxValue) {
            count++;
        }
    }

    printf("Count = %d\n", count);
    
    return 0;
}