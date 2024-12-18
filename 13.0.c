#include <stdio.h>
int calc( int x, int y);
int main(){
int x;
int y;
int sum;
printf("Please enter number\n",x,y);
scanf("%d",&x);
printf("\nPlease enter second number\n");
scanf("%d",&y);
   calc(x,y);


return 0;
}
int calc( int x, int y){
      int sum=x+y;
printf("\nThe sum of %d and %d is %d\n",x,y,sum);
return sum;
}
