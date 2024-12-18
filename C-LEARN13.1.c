#include <stdio.h>

int main(){
int x=5;
int y=5, sum;
sum=x+y;
printf("The sum of %d and %d is %d",x,y,sum);
printf("\nmultiple table\n");
if(sum >= 1){
    for(x=1; x<=5; x++){
        for(y=1; y<=5; y++){
            printf("%d\t",x*y);
        }
      printf("\n");
    }
}else {
   printf("no work done\n");
}




return 0;
}
