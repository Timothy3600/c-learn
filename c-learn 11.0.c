#include <stdio.h>
void add();
int main() {
char text[]="My name is BWIRE TIMOTHY, LOCATION IS ISBAT";
int n, x=1, sum=0;
    printf("Please enter value less than or equal to 20");
    scanf("%d",n);
    //Insert a while loop
    while(n>20){
     printf("Please enter value less than 20!!\n");
    scanf("%d",&n);
    }
for(x=0;x<=20;x+=n){
sum=sum+x;
printf("The sum of numbers %d and 1 is %d\n",n,x,sum);
}
printf("The sum of numbers %d and 1 is %d\n",x,sum);
void add();

return 0;
}
