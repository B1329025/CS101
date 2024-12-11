#include <stdio.h>

int main() {
    double pi = 0.0;
    int sign = 1; 
    int terms = 0; 

    while (!(pi >= 3.141585 && pi < 3.141595)) { 
        pi += sign * (4.0 / (2 * terms + 1));
        sign = -sign; 
        terms++;
    }

    printf("所需項數為: %d\n", terms);

    return 0;
}
