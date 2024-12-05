#include <stdio.h>

int main()
{
   int i =3000;
   int a;
   if (i<=1500){
       printf("70 元");
   }
   
   else{
       if(i%100 !=0){
           a= (((i-1500)/100)+1)*10;
           printf("%d 元",70+a);
       }
       else{
           a=((i-1500)/100)*10;
           printf("%d 元",70+a);
       }
   }
}   
