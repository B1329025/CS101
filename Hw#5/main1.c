#include <stdio.h>

int main()
{
   int rows = 7;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows + i - 1; j++) {
            if (j <= rows - i) {
                printf(" "); 
            } else if ((j - (rows - i)) % 2 == 1) {
                printf("%d",i); 
            } else {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
