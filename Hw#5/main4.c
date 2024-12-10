#include <stdio.h>
#include <math.h>

int swap_units_and_thousands(int num) {
    int digits[100], length = 0, temp = num;

    while (temp > 0) {
            digits[length++] = temp % 10;
            temp /= 10;
    }

    int temp_digit = digits[0];        
    digits[0] = digits[3];             
    digits[3] = temp_digit;            
    int result = 0;
    for (int i = length - 1; i >= 0; i--) {
        result = result * 10 + digits[i];
    }

    return result;
}

int main() {
    int num =12345;
    int digits[100];
    if(num>=1000){
        int result = swap_units_and_thousands(num);
        printf("交換後的數字為：%d\n", result);
    }
    else {
        for(int j=0;j<4;j++){
            digits[j] = num % 10;
            num /= 10;
        }      
        digits[3] = digits[0];             
        digits[0] = 0;
        for (int i = 3; i >=0; i--) {
            printf("%d",digits[i]);
        }
        
    }
    return 0;
}
