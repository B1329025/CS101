#include <stdio.h>



int main() {
    int a,b;
    for(int i=1;i<=81;i++){
    a=(i-1)/9+1;
    b=(i-1)%9+1;
    printf("%d ",a*b);
    
    if(b==9){
        printf("\n");
    }
    }
    
}
