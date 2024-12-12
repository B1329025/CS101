#include <stdio.h>

int main() {
    double pi = 0.0;
    int sign = 1; 
    int terms = 1; 
    long ipi=0;
    while (1) { 
        pi += sign * (4.0 /terms);
        sign = -sign; 
        ipi=pi*100000;
        if(ipi==314159){
            break;
        }
        terms+=2;
    }
    printf("最小分母為: %d\n", terms);
}
