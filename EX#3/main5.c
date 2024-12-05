#include <stdio.h>

int main()
{
   int i =300;
   int a;
   if (i<=30){
       printf("free");
   }
   else if(i >240 ){
       printf("240元");
   }
   else{
       if(i%30 !=0){
           a= ((i/30)+1)*30;
           printf("%d 元",a);
       }
       else{
           printf("%d 元",a);
       }
   }
}   
