#include <stdio.h>
int main(){
    int i = 1234567;
    int thousandplace = i / 1000 % 10;
    int unitplace = i%10;
    i -=thousandplace*1000+unitplace;
    i +=unitplace*1000+thousandplace;
    printf("%d",i);
    return 0;
}
