#include <stdio.h>

int main()
{
  int x = 9;
  int y = 9;
  int z = 1;
  int i ;
  if(x<0){
      i=((x*-1)*100+(y*10)+z);
      printf("%d",i*-1);
  }
  else{
    i=((x*100)+(y*10)+z);
    printf("%d",i); 
  }
}   
