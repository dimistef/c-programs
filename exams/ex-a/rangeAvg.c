#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double num, sum; 
    double count = 0;
    double minVal = atof(argv[1]);
    double maxVal = atof(argv[2]);
    

    while (scanf("%lf\n", &num) != EOF) {
        if (num >= minVal && num <= maxVal) {
            sum += num;
            count++;
        }
    }

    printf("Average = %.2lf\n", sum / count);
    
    return 0;
}