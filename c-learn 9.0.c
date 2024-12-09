#include <stdio.h>
void student();
void calculate();
//This is the main function
int main() {
   student();
   calculate(200,300);
return 0;
}
void student(){
char name []="BWIRE TIMOTHY";
char student_number[]="123456";
printf("My name is %s and my student_number is %s\n",name,student_number);
}
void calculate(int x,int y){
int sum=x+y;
printf("The sum of %d and %d is %d\n",x,y,sum);
}

